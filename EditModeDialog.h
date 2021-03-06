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
#if !defined(AFX_EDITMODEDIALOG_H__B2B7239C_0F8C_4F41_BC02_208B6EB806F7__INCLUDED_)
#define AFX_EDITMODEDIALOG_H__B2B7239C_0F8C_4F41_BC02_208B6EB806F7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// EditModeDialog.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CEditModeDialog dialog

class CEditModeDialog : public CDialogBar
{
// Construction
public:
	void UpdateEditMode(int iMode);
	void UpdateEditMode();
	CW3ZMapEditApp* m_pTheApp;
	CEditModeDialog(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CEditModeDialog)
	enum { IDD = IDD_BAR_EDITMODE };
	int		m_iEditMode;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEditModeDialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CEditModeDialog)
	afx_msg void OnSelChangeEditMode();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EDITMODEDIALOG_H__B2B7239C_0F8C_4F41_BC02_208B6EB806F7__INCLUDED_)
