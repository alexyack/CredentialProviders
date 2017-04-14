//
// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
// PARTICULAR PURPOSE.
//
// Copyright (c) 2006 Microsoft Corporation. All rights reserved.
//
// CCommandWindow provides a way to emulate external "connect" and "disconnect" 
// events, which are invoked via toggle button on a window. The window is launched
// and managed on a separate thread, which is necessary to ensure it gets pumped.
//

#pragma once

#include <windows.h>
#include "CSampleProvider.h"

class CCommandWindow
{
public:
    CCommandWindow(void);
    ~CCommandWindow(void);
    HRESULT Initialize(CSampleProvider *pProvider);
    BOOL GetConnectedStatus();

private:
    HRESULT _MyRegisterClass(void);
    HRESULT _InitInstance();
    BOOL _ProcessNextMessage();
    
    static DWORD WINAPI _ThreadProc(LPVOID lpParameter);
    static LRESULT CALLBACK    _WndProc(HWND, UINT, WPARAM, LPARAM);

    CSampleProvider                *_pProvider;        // Pointer to our owner.
    HWND                        _hWnd;                // Handle to our window.
    HWND                        _hWndButton;        // Handle to our window's button.
    HINSTANCE                    _hInst;                // Current instance
    BOOL                        _fConnected;        // Whether or not we're connected.
};
