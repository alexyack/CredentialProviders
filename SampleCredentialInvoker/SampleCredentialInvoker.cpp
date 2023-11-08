// SampleCredentialInvoker.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <WinCred.h>

#include <atlstr.h>
#include <strsafe.h>
 
#pragma comment(lib, "credui.lib")
#pragma comment(lib, "Secur32.lib")

#include <NTSecAPI.h>
#include <wincrypt.h>

#include <credentialprovider.h>

#include "../Helpers/helpers.h"

#pragma pack(push, KerbCSPInfo, 1)

#pragma warning(push)
#pragma warning(disable: 4200)

typedef struct _KERB_SMARTCARD_CSP_INFO {
	DWORD dwCspInfoLen;
	DWORD MessageType;
	union {
		PVOID   ContextInformation;
		ULONG64 SpaceHolderForWow64;
	};
	DWORD flags;
	DWORD KeySpec;
	ULONG nCardNameOffset;
	ULONG nReaderNameOffset;
	ULONG nContainerNameOffset;
	ULONG nCSPNameOffset;
//	TCHAR bBuffer[0];
} KERB_SMARTCARD_CSP_INFO, *PKERB_SMARTCARD_CSP_INFO;

typedef struct _KERB_CARD_CSP_NAMES
{
	WCHAR						szCardName[64];
	WCHAR						szContainerName[64];
	WCHAR						szCSPName[64];
	WCHAR						szReaderName[64];
} KERB_CARD_CSP_NAMES, *PKERB_CARD_CSP_NAMES;

typedef struct _KERB_CARD_CSP_INFO {
	KERB_SMARTCARD_CSP_INFO		ksci;
	KERB_CARD_CSP_NAMES			kccn;
} KERB_CARD_CSP_INFO, *PKERB_CARD_CSP_INFO;

typedef struct _KERB_CERT_LOGON {
	KERB_CERTIFICATE_LOGON		kcl;
	KERB_CARD_CSP_INFO			kcci;
} KERB_CERT_LOGON, *PKERB_CERT_LOGON;

#pragma warning(pop)

#pragma pack(pop, KerbCSPInfo)

int APIENTRY _tWinMain(HINSTANCE hInstance,
					   HINSTANCE hPrevInstance,
					   LPTSTR    lpCmdLine,
					   int       nCmdShow)
{
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);

	BOOL save = FALSE, bRet = FALSE;
	DWORD authPackage = 0, dwRet;
	LPVOID authBuffer, inBuffer;
	ULONG authBufferSize, inBufferSize;
	CREDUI_INFOW credUiInfo;
	CAtlStringW strMessage;
	LPWSTR szUsername, szDomain, szPassword;
	DWORD cbUsername, cbDomain, cbPassword, dwFlags;

	HRESULT hr;
	CComPtr<ICredentialProvider> spProvider;
	CComPtr<ICredentialProviderCredential> spCredential;
	CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION cpcs;
	CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR* pcpfd;
	CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE cpgsr;
	CREDENTIAL_PROVIDER_STATUS_ICON cpsi;
	DWORD dwCount, dwDefault, dwIndex;
	LPWSTR pszStatrus;
	KERB_CERT_LOGON kcl;
	HANDLE hlsa;
	LSA_STRING lsastr;
	DWORD cbkcl;


	credUiInfo.cbSize = sizeof(credUiInfo);
	credUiInfo.hbmBanner = NULL;
	credUiInfo.hwndParent = NULL;
	credUiInfo.pszCaptionText = L"���� ������� ������";
	credUiInfo.pszMessageText = L"������� ������, �������� �����, ����� ���� ������� � ������� ������� �/��� �������";

	dwFlags = CREDUIWIN_CHECKBOX;

	authBuffer = NULL;
	authBufferSize = 0;
	
	inBuffer = NULL;
	inBufferSize = 0;


	if(bRet)
	{
		dwCount = 0;
		authPackage = 0;

		cbkcl = sizeof(KERB_CERT_LOGON);
		memset(&kcl, 0, cbkcl);

		kcl.kcl.MessageType = KerbCertificateLogon;
		kcl.kcl.CspData = PUCHAR(offsetof(KERB_CERT_LOGON,kcci));
		kcl.kcl.CspDataLength = sizeof(KERB_CARD_CSP_INFO);

		kcl.kcci.ksci.dwCspInfoLen = sizeof(KERB_CARD_CSP_INFO);
		kcl.kcci.ksci.MessageType = 1;
		kcl.kcci.ksci.flags = 0x00010001;
		kcl.kcci.ksci.nCardNameOffset      = offsetof(KERB_CARD_CSP_NAMES, szCardName)      / sizeof(WCHAR);
		kcl.kcci.ksci.nReaderNameOffset    = offsetof(KERB_CARD_CSP_NAMES, szReaderName)    / sizeof(WCHAR);
		kcl.kcci.ksci.nContainerNameOffset = offsetof(KERB_CARD_CSP_NAMES, szContainerName) / sizeof(WCHAR);
		kcl.kcci.ksci.nCSPNameOffset       = offsetof(KERB_CARD_CSP_NAMES, szCSPName)       / sizeof(WCHAR);

		StringCchCopyW(kcl.kcci.kccn.szReaderName, 64, TEXT("Athena ASEDrive IIIe USB 0"));

		inBuffer = &kcl;
		inBufferSize = sizeof(KERB_CERT_LOGON);
		dwFlags = CREDUIWIN_IN_CRED_ONLY;

		//
		hr = CoInitialize(NULL);

		if(SUCCEEDED(hr))
			hr = spProvider.CoCreateInstance(CLSID_SmartcardCredentialProvider);
	
		if(SUCCEEDED(hr))
			hr = spProvider->SetUsageScenario(CPUS_CREDUI, CREDUIWIN_IN_CRED_ONLY);

// 		cpcs.rgbSerialization = LPBYTE(inBuffer);
// 		cpcs.cbSerialization = inBufferSize;
// 		cpcs.clsidCredentialProvider = CLSID_NULL;	
// 		cpcs.ulAuthenticationPackage = 0xFFFFEB34;
		cpcs.rgbSerialization = NULL;
		cpcs.cbSerialization = 0;
		cpcs.clsidCredentialProvider = CLSID_NULL;	
		cpcs.ulAuthenticationPackage = 0;

		if(SUCCEEDED(hr))
			hr = spProvider->SetSerialization(&cpcs);

		if(SUCCEEDED(hr))
			hr = spProvider->GetFieldDescriptorCount(&dwCount);

		for(dwIndex = 0; dwIndex < dwCount; dwIndex++)
		{
			hr = spProvider->GetFieldDescriptorAt(dwIndex, &pcpfd);
		}

		if(SUCCEEDED(hr))
			hr = spProvider->GetCredentialCount(&dwCount, &dwDefault, &save);

		if(dwCount > 0)
		{
			if(SUCCEEDED(hr))
				hr = spProvider->GetCredentialAt(0, &spCredential);

			if(SUCCEEDED(hr))
				hr = spCredential->SetSelected(&save);

			if(SUCCEEDED(hr))
				hr = spCredential->SetStringValue(1, L"12345678");

			memset(&cpcs, 0, sizeof(CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION));

			if(SUCCEEDED(hr))
				hr = spCredential->GetSerialization(&cpgsr, &cpcs, &pszStatrus, &cpsi);

			spCredential.Release();
		}

		spProvider.Release();

		dwRet = hr;
	}
	else
	{
		dwRet = CredUIPromptForWindowsCredentialsW(&(credUiInfo), 0, &(authPackage),
			inBuffer, inBufferSize, &authBuffer, &authBufferSize, &(save), dwFlags);
	}

	if(dwRet == ERROR_SUCCESS)
	{
		szUsername = NULL;
		szDomain = NULL;
		szPassword = NULL;

		cbUsername = 0;
		cbDomain = 0;
		cbPassword = 0;

		bRet = CredUnPackAuthenticationBufferW(CRED_PACK_PROTECTED_CREDENTIALS, authBuffer, authBufferSize, 
			szUsername, &cbUsername, szDomain, &cbDomain, szPassword, &cbPassword);
		dwRet = GetLastError();

		if(bRet	|| (dwRet == ERROR_INSUFFICIENT_BUFFER))
		{
			if(cbUsername < 80)
				cbUsername = 80;

			if(cbDomain < 80)
				cbDomain = 80;

			if(cbPassword < 80)
				cbPassword = 80;

			szUsername = LPWSTR(malloc(cbUsername * sizeof(WCHAR)));
			szDomain = LPWSTR(malloc(cbDomain * sizeof(WCHAR)));
			szPassword = LPWSTR(malloc(cbPassword * sizeof(WCHAR)));

			memset(szUsername, 0, cbUsername * sizeof(WCHAR));
			memset(szDomain, 0, cbDomain * sizeof(WCHAR));
			memset(szPassword, 0, cbPassword * sizeof(WCHAR));

			bRet = CredUnPackAuthenticationBufferW(CRED_PACK_PROTECTED_CREDENTIALS, authBuffer, authBufferSize, 
				szUsername, &cbUsername, szDomain, &cbDomain, szPassword, &cbPassword);
			dwRet = GetLastError();

			if(bRet)
			{
				strMessage.Format(L"Username:\t'%s'\nDomain:\t\t'%s'\nPassword:\t'%s'", szUsername, szDomain, szPassword);
				MessageBox(NULL, strMessage, L"������� ������", MB_OK | MB_ICONINFORMATION);
			}
			else
			{
				strMessage.Format(L"��� ����� ������� ������ ��������� ������.\n������: %s.", FormatLastError(dwRet));
				MessageBox(NULL, strMessage, L"������� ������", MB_OK | MB_ICONERROR);
			}

			SecureZeroMemory(szUsername, cbUsername * sizeof(WCHAR));
			SecureZeroMemory(szDomain, cbDomain * sizeof(WCHAR));
			SecureZeroMemory(szPassword, cbPassword * sizeof(WCHAR));

			free(szUsername);
			free(szDomain);
			free(szPassword);
		}
		else
		{
			strMessage.Format(L"��� ����� ������� ������ ��������� ������.\n������: %s.", FormatLastError(dwRet));
			MessageBox(NULL, strMessage, L"������� ������", MB_OK | MB_ICONERROR);
		}

		SecureZeroMemory(authBuffer, authBufferSize);
		CoTaskMemFree(authBuffer);
	}
	else if(dwRet == ERROR_CANCELLED)
	{
		MessageBox(NULL, L"������������ ��������� �� ����� ������� ������.", L"������� ������", MB_OK | MB_ICONWARNING);
	}
	else
	{
		strMessage.Format(L"��� ����� ������� ������ ��������� ������.\n������: %s.", FormatLastError(dwRet));
		MessageBox(NULL, strMessage, L"������� ������", MB_OK | MB_ICONERROR);
	}

	return 0;
}

