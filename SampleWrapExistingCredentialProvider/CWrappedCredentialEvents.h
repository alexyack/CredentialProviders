//
// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
// PARTICULAR PURPOSE.
//
// Copyright (c) 2006 Microsoft Corporation. All rights reserved.
//
// CWrappedCredentialEvents is our implementation of ICredentialProviderCredentialEvents (ICPCE).
// Most credential provider authors will not need to implement this interface,
// but a credential provider that wraps another (as this sample does) must.
// The wrapped credential will pass its "this" pointer into any calls to ICPCE,
// but LogonUI will not recognize the wrapped "this" pointer as a valid credential.
// Our implementation translates from the wrapped "this" pointer to the wrapper "this".

#pragma once

#include <windows.h>
#include <strsafe.h>
#include <shlguid.h>
#include "helpers.h"
#include "dll.h"
#include "resource.h"

class CWrappedCredentialEvents : public ICredentialProviderCredentialEvents
{
public:
	// IUnknown
    STDMETHOD_(ULONG, AddRef)()
    {
        return ++_cRef;
    }
    STDMETHOD_(ULONG, Release)()
    {
        LONG cRef = --_cRef;
        if (!cRef)
        {
            delete this;
        }
        return cRef;
    }

    STDMETHOD (QueryInterface)(REFIID riid, void** ppv)
    {
        static const QITAB qit[] =
        {
            QITABENT(CWrappedCredentialEvents, ICredentialProviderCredentialEvents), // IID_ICredentialProviderCredentialEvents
            {0},
        };
        return QISearch(this, qit, riid, ppv);
    }
    
    // ICredentialProviderCredentialEvents
    IFACEMETHODIMP SetFieldState(ICredentialProviderCredential *pcpc, DWORD dwFieldID, CREDENTIAL_PROVIDER_FIELD_STATE cpfs);
    IFACEMETHODIMP SetFieldInteractiveState(ICredentialProviderCredential *pcpc, DWORD dwFieldID, CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE cpfis);
    IFACEMETHODIMP SetFieldString(ICredentialProviderCredential *pcpc, DWORD dwFieldID, PCWSTR psz);
    IFACEMETHODIMP SetFieldCheckbox(ICredentialProviderCredential *pcpc, DWORD dwFieldID, BOOL bChecked, PCWSTR pszLabel);
    IFACEMETHODIMP SetFieldBitmap(ICredentialProviderCredential *pcpc, DWORD dwFieldID, HBITMAP hbmp);
    IFACEMETHODIMP SetFieldComboBoxSelectedItem(ICredentialProviderCredential *pcpc, DWORD dwFieldID, DWORD dwSelectedItem);
    IFACEMETHODIMP DeleteFieldComboBoxItem(ICredentialProviderCredential *pcpc, DWORD dwFieldID, DWORD dwItem);
    IFACEMETHODIMP AppendFieldComboBoxItem(ICredentialProviderCredential *pcpc, DWORD dwFieldID, PCWSTR pszItem);
    IFACEMETHODIMP SetFieldSubmitButton(ICredentialProviderCredential *pcpc, DWORD dwFieldID, DWORD dwAdjacentTo);
    IFACEMETHODIMP OnCreatingWindow(HWND *phwndOwner);

    // Local
    CWrappedCredentialEvents();

    void Initialize(ICredentialProviderCredential* pWrapperCredential, ICredentialProviderCredentialEvents* pEvents);
    void Uninitialize();

private:
    LONG                                 _cRef;
    ICredentialProviderCredential*       _pWrapperCredential;
    ICredentialProviderCredentialEvents* _pEvents;
};
