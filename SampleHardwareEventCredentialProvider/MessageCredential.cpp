//
// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
// PARTICULAR PURPOSE.
//
// Copyright (c) 2006 Microsoft Corporation. All rights reserved.
//
//
#include <unknwn.h>
#include "MessageCredential.h"
#include "guid.h"

// CMessageCredential ////////////////////////////////////////////////////////

CMessageCredential::CMessageCredential():
    _cRef(1)
{
    DllAddRef();

    ZeroMemory(_rgCredProvFieldDescriptors, sizeof(_rgCredProvFieldDescriptors));
    ZeroMemory(_rgFieldStatePairs, sizeof(_rgFieldStatePairs));
    ZeroMemory(_rgFieldStrings, sizeof(_rgFieldStrings));
}

CMessageCredential::~CMessageCredential()
{
    for (int i = 0; i < ARRAYSIZE(_rgFieldStrings); i++)
    {
        CoTaskMemFree(_rgFieldStrings[i]);
        CoTaskMemFree(_rgCredProvFieldDescriptors[i].pszLabel);
    }

    DllRelease();
}

//
// Initializes one credential with the field information passed in.
// Set the value of the SFI_USERNAME field to pwzUsername.
//
HRESULT CMessageCredential::Initialize(
                        const CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR* rgcpfd,
                        const FIELD_STATE_PAIR* rgfsp,
                        PWSTR szMessage)
{
    HRESULT hr = S_OK;

    // Copy the field descriptors for each field. This is useful if you want to vary the field
    // descriptors based on what Usage scenario the credential was created for.
    for (DWORD i = 0; SUCCEEDED(hr) && i < ARRAYSIZE(_rgCredProvFieldDescriptors); i++)
    {
        _rgFieldStatePairs[i] = rgfsp[i];
        hr = FieldDescriptorCopy(rgcpfd[i], &_rgCredProvFieldDescriptors[i]);
    }

    // Initialize the String value of the message field.
    if (SUCCEEDED(hr))
    {
        hr = SHStrDupW(szMessage, &(_rgFieldStrings[SMFI_MESSAGE]));
    }
	if (SUCCEEDED(hr))
	{
		hr = SHStrDupW(L"Connect Token", &_rgFieldStrings[SMFI_CONNECT_TOKEN]);
	}

	return S_OK;
}

// LogonUI calls this in order to give us a callback in case we need to notify it of 
// anything, such as for getting and setting values.
HRESULT CMessageCredential::Advise(
    ICredentialProviderCredentialEvents* pcpce
    )
{
    UNREFERENCED_PARAMETER(pcpce);
    return E_NOTIMPL;
}

// LogonUI calls this to tell us to release the callback.
HRESULT CMessageCredential::UnAdvise()
{
    return E_NOTIMPL;
}

// LogonUI calls this function when our tile is selected (zoomed). If you simply want 
// fields to show/hide based on the selected state, there's no need to do anything 
// here - you can set that up in the field definitions.  But if you want to do something
// more complicated, like change the contents of a field when the tile is selected, you 
// would do it here.
HRESULT CMessageCredential::SetSelected(BOOL* pbAutoLogon)  
{
    UNREFERENCED_PARAMETER(pbAutoLogon);
    return S_FALSE;
}

// Similarly to SetSelected, LogonUI calls this when your tile was selected
// and now no longer is. Since this credential is simply read-only text, we do nothing.
HRESULT CMessageCredential::SetDeselected()
{
    return S_OK;
}

// Get info for a particular field of a tile. Called by logonUI to get information to 
// display the tile.
HRESULT CMessageCredential::GetFieldState(
    DWORD dwFieldID,
    CREDENTIAL_PROVIDER_FIELD_STATE* pcpfs,
    CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE* pcpfis
    )
{
    HRESULT hr;
    
    // Make sure the field and other paramters are valid.
    if (dwFieldID < ARRAYSIZE(_rgFieldStatePairs) && pcpfs && pcpfis)
    {
        *pcpfis = _rgFieldStatePairs[dwFieldID].cpfis;
        *pcpfs = _rgFieldStatePairs[dwFieldID].cpfs;
        hr = S_OK;
    }
    else
    {
        hr = E_INVALIDARG;
    }
    return hr;
}

// Called to request the string value of the indicated field.
HRESULT CMessageCredential::GetStringValue(
    DWORD dwFieldID, 
    PWSTR* ppwsz
    )
{
    HRESULT hr;

    // Check to make sure dwFieldID is a legitimate index
    if (dwFieldID < ARRAYSIZE(_rgCredProvFieldDescriptors) && ppwsz) 
    {
        // Make a copy of the string and return that. The caller
        // is responsible for freeing it.
        hr = SHStrDupW(_rgFieldStrings[dwFieldID], ppwsz);
    }
    else
    {
        hr = E_INVALIDARG;
    }

    return hr;
}

// Called to request the image value of the indicated field.
HRESULT CMessageCredential::GetBitmapValue(
    DWORD dwFieldID, 
    HBITMAP* phbmp
    )
{
    UNREFERENCED_PARAMETER(dwFieldID);
    UNREFERENCED_PARAMETER(phbmp);
    return E_NOTIMPL;
}

// Since this credential isn't intended to provide a way for the user to submit their
// information, we do without a Submit button.
HRESULT CMessageCredential::GetSubmitButtonValue(
    DWORD dwFieldID,
    DWORD* pdwAdjacentTo
    )
{
    UNREFERENCED_PARAMETER(dwFieldID);
    UNREFERENCED_PARAMETER(pdwAdjacentTo);
    return E_NOTIMPL;
}

// Our credential doesn't have any settable strings.
HRESULT CMessageCredential::SetStringValue(
    DWORD dwFieldID, 
    PCWSTR pwz      
    )
{
    UNREFERENCED_PARAMETER(dwFieldID);
    UNREFERENCED_PARAMETER(pwz);
    return E_NOTIMPL;
}

// Our credential doesn't have any checkable boxes.
HRESULT CMessageCredential::GetCheckboxValue(
    DWORD dwFieldID, 
    BOOL* pbChecked,
    PWSTR* ppwszLabel
    )
{
    UNREFERENCED_PARAMETER(dwFieldID);
    UNREFERENCED_PARAMETER(pbChecked);
    UNREFERENCED_PARAMETER(ppwszLabel);
    return E_NOTIMPL;
}

// Our credential doesn't have a checkbox.
HRESULT CMessageCredential::SetCheckboxValue(
    DWORD dwFieldID, 
    BOOL bChecked
    )
{
    UNREFERENCED_PARAMETER(dwFieldID);
    UNREFERENCED_PARAMETER(bChecked);
    return E_NOTIMPL;
}

// Our credential doesn't have a combobox.
HRESULT CMessageCredential::GetComboBoxValueCount(
    DWORD dwFieldID, 
    DWORD* pcItems, 
    DWORD* pdwSelectedItem
    )
{
    UNREFERENCED_PARAMETER(dwFieldID);
    UNREFERENCED_PARAMETER(pcItems);
    UNREFERENCED_PARAMETER(pdwSelectedItem);
    return E_NOTIMPL;
}

// Our credential doesn't have a combobox.
HRESULT CMessageCredential::GetComboBoxValueAt(
    DWORD dwFieldID, 
    DWORD dwItem,
    PWSTR* ppwszItem
    )
{
    UNREFERENCED_PARAMETER(dwFieldID);
    UNREFERENCED_PARAMETER(dwItem);
    UNREFERENCED_PARAMETER(ppwszItem);
    return E_NOTIMPL;
}

// Our credential doesn't have a combobox.
HRESULT CMessageCredential::SetComboBoxSelectedValue(
    DWORD dwFieldId,
    DWORD dwSelectedItem
    )
{
    UNREFERENCED_PARAMETER(dwFieldId);
    UNREFERENCED_PARAMETER(dwSelectedItem);
    return E_NOTIMPL;
}

// Our credential doesn't have a command link.
HRESULT CMessageCredential::CommandLinkClicked(DWORD dwFieldID)
{
    UNREFERENCED_PARAMETER(dwFieldID);
	Beep(1000, 500);
	Beep(1000 + dwFieldID * 200, 500);
    return S_OK;
}

// We're not providing a way to log on from this credential, so we don't need serialization.
HRESULT CMessageCredential::GetSerialization(
    CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE* pcpgsr,
    CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION* pcpcs, 
    PWSTR* ppwszOptionalStatusText, 
    CREDENTIAL_PROVIDER_STATUS_ICON* pcpsiOptionalStatusIcon
    )
{
    UNREFERENCED_PARAMETER(ppwszOptionalStatusText);
    UNREFERENCED_PARAMETER(pcpsiOptionalStatusIcon);
    UNREFERENCED_PARAMETER(pcpgsr);
    UNREFERENCED_PARAMETER(pcpcs);
    return E_NOTIMPL;
}

// We're not providing a way to log on from this credential, so it can't have a result.
HRESULT CMessageCredential::ReportResult(
    NTSTATUS ntsStatus, 
    NTSTATUS ntsSubstatus,
    PWSTR* ppwszOptionalStatusText, 
    CREDENTIAL_PROVIDER_STATUS_ICON* pcpsiOptionalStatusIcon
    )
{
    UNREFERENCED_PARAMETER(ntsStatus);
    UNREFERENCED_PARAMETER(ntsStatus);
    UNREFERENCED_PARAMETER(ntsSubstatus);
    UNREFERENCED_PARAMETER(ppwszOptionalStatusText);
    UNREFERENCED_PARAMETER(pcpsiOptionalStatusIcon);
    return E_NOTIMPL;
}
