//
// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
// PARTICULAR PURPOSE.
//
// Copyright (c) 2006 Microsoft Corporation. All rights reserved.
//
// Standard dll required functions and class factory implementation.

#include <windows.h>
#include <unknwn.h>
#include "Dll.h"
#include "helpers.h"

static LONG g_cRef = 0;   // global dll reference count
HINSTANCE g_hinst = NULL; // global dll hinstance

extern HRESULT CSampleProvider_CreateInstance(REFIID riid, void** ppv);
EXTERN_C GUID CLSID_CSampleProvider;

class CClassFactory : public IClassFactory
{
public:
    CClassFactory() : _cRef(1) 
    {
    }

    // IUnknown
    IFACEMETHODIMP QueryInterface(REFIID riid, __deref_out void **ppv)
    {
        static const QITAB qit[] = 
        {
            QITABENT(CClassFactory, IClassFactory),
            { 0 },
        };
        return QISearch(this, qit, riid, ppv);
    }

    IFACEMETHODIMP_(ULONG) AddRef()
    {
        return InterlockedIncrement(&_cRef);
    }

    IFACEMETHODIMP_(ULONG) Release()
    {
        LONG cRef = InterlockedDecrement(&_cRef);
        if (!cRef)
            delete this;
        return cRef;
    }

    // IClassFactory
    IFACEMETHODIMP CreateInstance(IUnknown* pUnkOuter, REFIID riid, __deref_out void **ppv)
    {
        HRESULT hr;
        if (!pUnkOuter)
        {
            hr = CSampleProvider_CreateInstance(riid, ppv);
        }
        else
        {
            *ppv = NULL;
            hr = CLASS_E_NOAGGREGATION;
        }
        return hr;
    }

    IFACEMETHODIMP LockServer(BOOL bLock)
    {
        if (bLock)
        {
            DllAddRef();
        }
        else
        {
            DllRelease();
        }
        return S_OK;
    }

private:
    ~CClassFactory()
    {
    }
    long _cRef;
};

HRESULT CClassFactory_CreateInstance(REFCLSID rclsid, REFIID riid, __deref_out void **ppv)
{
    *ppv = NULL;

    HRESULT hr;
    if (CLSID_CSampleProvider == rclsid)
    {
        CClassFactory* pcf = new CClassFactory();
        if (pcf)
        {
            hr = pcf->QueryInterface(riid, ppv);
            pcf->Release();
        }
        else
        {
            hr = E_OUTOFMEMORY;
        }
    }
    else
    {
        hr = CLASS_E_CLASSNOTAVAILABLE;
    }
    return hr;
}

void DllAddRef()
{
    InterlockedIncrement(&g_cRef);
}

void DllRelease()
{
    InterlockedDecrement(&g_cRef);
}

STDAPI DllCanUnloadNow()
{
    return (g_cRef > 0) ? S_FALSE : S_OK;
}

STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, void** ppv)
{
    return CClassFactory_CreateInstance(rclsid, riid, ppv);
}

STDAPI_(BOOL) DllMain(HINSTANCE hinstDll, DWORD dwReason, void *)
{
    switch (dwReason)
    {
    case DLL_PROCESS_ATTACH:
        DisableThreadLibraryCalls(hinstDll);
        break;
    case DLL_PROCESS_DETACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
        break;
    }
    
    g_hinst = hinstDll;
    return TRUE;
}

