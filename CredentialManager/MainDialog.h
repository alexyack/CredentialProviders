#ifndef __MAINDIALOG_H__
#define __MAINDIALOG_H__

#include "resource.h"

class CMainDialog : public CDialogImpl<CMainDialog>,
		public CMessageFilter
{
public:
	CMainDialog();
	~CMainDialog();

	BOOL PreTranslateMessage(MSG* pMsg);

	enum { IDD = IDD_CREDENTIALS_DIALOG };

	BEGIN_MSG_MAP(CMainDialog)
		MESSAGE_HANDLER(WM_INITDIALOG, OnInitDialog)
		MESSAGE_HANDLER(WM_CLOSE, OnClose)
	END_MSG_MAP()

	LRESULT OnInitDialog(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
	LRESULT OnClose(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
};

#endif // __MAINDIALOG_H__
