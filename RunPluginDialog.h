/*
    This file is part of W3ZMapEditor (c).

    W3ZMapEditor is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    W3ZMapEditor is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with W3ZMapEditor; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/
#pragma once
#include "afxwin.h"


// Bo�te de dialogue CRunPluginDialog

class CRunPluginDialog : public CDialog
{
	DECLARE_DYNAMIC(CRunPluginDialog)

public:
	CRunPluginDialog(CWnd* pParent = NULL);   // constructeur standard
	virtual ~CRunPluginDialog();

// Donn�es de bo�te de dialogue
	enum { IDD = IDD_DLG_RUN_PLUGIN };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	CComboBox m_cmbPluginList;
	virtual BOOL OnInitDialog();
	CString m_strSelectedPluginName;
	CButton m_btnRun;
};
