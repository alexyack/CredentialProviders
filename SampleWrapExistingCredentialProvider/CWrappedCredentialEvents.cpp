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

#include <unknwn.h>

#include "CWrappedCredentialEvents.h"

HRESULT CWrappedCredentialEvents::SetFieldState(ICredentialProviderCredential* pcpc, DWORD dwFieldID, CREDENTIAL_PROVIDER_FIELD_STATE cpfs)
{
    UNREFERENCED_PARAMETER(pcpc);

    HRESULT hr = E_FAIL;

    if (_pWrapperCredential && _pEvents)
    {
        hr = _pEvents->SetFieldState(_pWrapperCredential, dwFieldID, cpfs);
    }

    return hr;
}

HRESULT CWrappedCredentialEvents::SetFieldInteractiveState(ICredentialProviderCredential* pcpc, DWORD dwFieldID, CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE cpfis)
{
    UNREFERENCED_PARAMETER(pcpc);

    HRESULT hr = E_FAIL;

    if (_pWrapperCredential && _pEvents)
    {
        hr = _pEvents->SetFieldInteractiveState(_pWrapperCredential, dwFieldID, cpfis);
    }

    return hr;
}

HRESULT CWrappedCredentialEvents::SetFieldString(ICredentialProviderCredential* pcpc, DWORD dwFieldID, PCWSTR psz)
{
    UNREFERENCED_PARAMETER(pcpc);

    HRESULT hr = E_FAIL;

    if (_pWrapperCredential && _pEvents)
    {
        hr = _pEvents->SetFieldString(_pWrapperCredential, dwFieldID, psz);
    }

    return hr;
}

HRESULT CWrappedCredentialEvents::SetFieldBitmap(ICredentialProviderCredential* pcpc, DWORD dwFieldID, HBITMAP hbmp)
{
    UNREFERENCED_PARAMETER(pcpc);

    HRESULT hr = E_FAIL;

    if (_pWrapperCredential && _pEvents)
    {
        hr = _pEvents->SetFieldBitmap(_pWrapperCredential, dwFieldID, hbmp);
    }

    return hr;
}

HRESULT CWrappedCredentialEvents::SetFieldCheckbox(ICredentialProviderCredential* pcpc, DWORD dwFieldID, BOOL bChecked, PCWSTR pszLabel)
{
    UNREFERENCED_PARAMETER(pcpc);

    HRESULT hr = E_FAIL;

    if (_pWrapperCredential && _pEvents)
    {
        hr = _pEvents->SetFieldCheckbox(_pWrapperCredential, dwFieldID, bChecked, pszLabel);
    }

    return hr;
}

HRESULT CWrappedCredentialEvents::SetFieldComboBoxSelectedItem(ICredentialProviderCredential* pcpc, DWORD dwFieldID, DWORD dwSelectedItem)
{
    UNREFERENCED_PARAMETER(pcpc);

    HRESULT hr = E_FAIL;

    if (_pWrapperCredential && _pEvents)
    {
        hr = _pEvents->SetFieldComboBoxSelectedItem(_pWrapperCredential, dwFieldID, dwSelectedItem);
    }

    return hr;
}

HRESULT CWrappedCredentialEvents::DeleteFieldComboBoxItem(ICredentialProviderCredential* pcpc, DWORD dwFieldID, DWORD dwItem)
{
    UNREFERENCED_PARAMETER(pcpc);

    HRESULT hr = E_FAIL;

    if (_pWrapperCredential && _pEvents)
    {
        hr = _pEvents->DeleteFieldComboBoxItem(_pWrapperCredential, dwFieldID, dwItem);
    }

    return hr;
}

HRESULT CWrappedCredentialEvents::AppendFieldComboBoxItem(ICredentialProviderCredential* pcpc, DWORD dwFieldID, PCWSTR pszItem)
{
    UNREFERENCED_PARAMETER(pcpc);

    HRESULT hr = E_FAIL;

    if (_pWrapperCredential && _pEvents)
    {
        hr = _pEvents->AppendFieldComboBoxItem(_pWrapperCredential, dwFieldID, pszItem);
    }

    return hr;
}

HRESULT CWrappedCredentialEvents::SetFieldSubmitButton(ICredentialProviderCredential* pcpc, DWORD dwFieldID, DWORD dwAdjacentTo)
{
    UNREFERENCED_PARAMETER(pcpc);

    HRESULT hr = E_FAIL;

    if (_pWrapperCredential && _pEvents)
    {
        hr = _pEvents->SetFieldSubmitButton(_pWrapperCredential, dwFieldID, dwAdjacentTo);
    }

    return hr;
}

HRESULT CWrappedCredentialEvents::OnCreatingWindow(HWND* phwndOwner)
{
    HRESULT hr = E_FAIL;

    if (_pWrapperCredential && _pEvents)
    {
        hr = _pEvents->OnCreatingWindow(phwndOwner);
    }

    return hr;
}

CWrappedCredentialEvents::CWrappedCredentialEvents() :
    _cRef(1), _pWrapperCredential(NULL), _pEvents(NULL)
{}

// 
// Save a copy of LogonUI's ICredentialProviderCredentialEvents pointer for doing callbacks
// and the "this" pointer of the wrapper credential to specify events as coming from.
//
// Pointers are saved as weak references (ie, without a reference count) to avoid circular 
// references.  (For instance, The wrapper credential has a reference on the wrapped credential
// and the wrapped credential should take a reference on this object.  If we had a reference
// on the wrapper credential, there would be a cycle.)  The wrapper credential must manage
// the lifetime of our weak references through calls to Initialize and Uninitialize to
// prevent our weak references from becoming invalid.
//
void CWrappedCredentialEvents::Initialize(ICredentialProviderCredential* pWrapperCredential, ICredentialProviderCredentialEvents* pEvents)
{
    _pWrapperCredential = pWrapperCredential;
    _pEvents = pEvents;
}

//
// Erase our weak references on the wrapper credential and LogonUI's
// ICredentialProviderCredentialEvents pointer.
//
void CWrappedCredentialEvents::Uninitialize()
{
    _pWrapperCredential = NULL;
    _pEvents = NULL;
}
