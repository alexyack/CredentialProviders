#include "CredentialManager.h"
#include "resource.h"
#include "MainDialog.h"

CMainDialog::CMainDialog()
{
}

CMainDialog::~CMainDialog()
{
}

BOOL CMainDialog::PreTranslateMessage(MSG* pMsg)
{
	return CWindow::IsDialogMessage(pMsg);
}

LRESULT CMainDialog::OnInitDialog(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& bHandled)
{
	// PreTranslateMessage
	_AtlModule.GetMessageLoop()->AddMessageFilter(this);

	return TRUE;
}

LRESULT CMainDialog::OnClose(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
{
	DestroyWindow();
	::PostQuitMessage(IDOK);

	return 0;
}
