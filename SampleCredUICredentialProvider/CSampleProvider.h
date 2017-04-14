//
// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
// PARTICULAR PURPOSE.
//
// Copyright (c) Microsoft Corporation. All rights reserved.
//
//

#pragma once

#include <credentialprovider.h>
#include <windows.h>
#include <strsafe.h>

#include "CSampleCredential.h"
#include "helpers.h"

#define MAX_CREDENTIALS 3

class CSampleProvider : public ICredentialProvider
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
            QITABENT(CSampleProvider, ICredentialProvider), // IID_ICredentialProvider
            {0},
        };
        return QISearch(this, qit, riid, ppv);
    }

  public:
    IFACEMETHODIMP SetUsageScenario(CREDENTIAL_PROVIDER_USAGE_SCENARIO cpus, DWORD dwFlags);
    IFACEMETHODIMP SetSerialization(const CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION* pcpcs);

    IFACEMETHODIMP Advise(__in ICredentialProviderEvents* pcpe, UINT_PTR upAdviseContext);
    IFACEMETHODIMP UnAdvise();

    IFACEMETHODIMP GetFieldDescriptorCount(__out DWORD* pdwCount);
    IFACEMETHODIMP GetFieldDescriptorAt(DWORD dwIndex,  __deref_out CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR** ppcpfd);

    IFACEMETHODIMP GetCredentialCount(__out DWORD* pdwCount,
                                      __out DWORD* pdwDefault,
                                      __out BOOL* pbAutoLogonWithDefault);
    IFACEMETHODIMP GetCredentialAt(DWORD dwIndex, 
                                   __out ICredentialProviderCredential** ppcpc);

    friend HRESULT CSampleProvider_CreateInstance(REFIID riid, __deref_out void** ppv);

  protected:
    CSampleProvider();
    __override ~CSampleProvider();
    
  private:
    
    HRESULT _EnumerateOneCredential(__in DWORD dwCredentialIndex,
                                    __in PCWSTR pwzUsername
                                    );

    // Create/free enumerated credentials.
    HRESULT _CreateEnumeratedCredentials();
    void _ReleaseEnumeratedCredentials();
    
    HRESULT _EnumerateCredentials(bool bAlreadyHaveSetSerializationCred = false); //this enumerates the normal set of 2 creds
    HRESULT _EnumerateSetSerialization(); //this will enumerate one tile with the contents of _pkiulSetSerialization

private:
    LONG              _cRef;
    CSampleCredential *_rgpCredentials[MAX_CREDENTIALS]; // Pointers to the credentials which will be enumerated by 
                                                         // this Provider.
    KERB_INTERACTIVE_UNLOCK_LOGON *     _pkiulSetSerialization;
    CREDENTIAL_PROVIDER_USAGE_SCENARIO  _cpus;
    DWORD                               _dwCredUIFlags;
    bool                                _bRecreateEnumeratedCredentials;
    bool                                _bAutoSubmitSetSerializationCred;
    bool                                _bDefaultToFirstCredential;
};
