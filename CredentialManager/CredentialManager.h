#ifndef __CREDENTIALMANAGER_H__
#define __CREDENTIALMANAGER_H__

#define _CRT_SECURE_NO_WARNINGS
#define _SECURE_ATL		1

#define WINVER			_WIN32_WINNT_VISTA
#define _WIN32_WINNT	_WIN32_WINNT_VISTA
#define NTDDI_VERSION	NTDDI_VISTA

#include <SDKDDKVer.h>

#define _ATL_APARTMENT_THREADED

#define OLD_ATL_CRITSEC_CODE

#define _CSTRING_NS ATL

#include <Windows.h>

#include <atlbase.h>
#include <atlapp.h>

extern CAppModule _AtlModule;

#include <atlstr.h>
#include <atlmisc.h>
#include <atlcom.h>
#include <atlhost.h>
#include <atlwin.h>
#include <atlctl.h>
#include <atlctrls.h>

#include <atlframe.h>
#include <atldlgs.h>
#include <atlctrlw.h>
#include <atlddx.h>

#endif // __CREDENTIALMANAGER_H__
