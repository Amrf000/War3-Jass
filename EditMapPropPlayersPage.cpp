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
// EditMapPropPlayersPage.cpp : implementation file
//
#include "stdafx.h"
#include "w3zmapedit.h"
#include "EditMapPropPlayersPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


/////////////////////////////////////////////////////////////////////////////
// CEditMapPropPlayersPage property page
IMPLEMENT_DYNCREATE(CEditMapPropPlayersPage, CPropertyPage)

CEditMapPropPlayersPage::CEditMapPropPlayersPage() : CPropertyPageEnh(CEditMapPropPlayersPage::IDD)
{
	//{{AFX_DATA_INIT(CEditMapPropPlayersPage)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}

CEditMapPropPlayersPage::~CEditMapPropPlayersPage()
{
}

void CEditMapPropPlayersPage::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPageEnh::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CEditMapPropPlayersPage)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CEditMapPropPlayersPage, CPropertyPageEnh)
	//{{AFX_MSG_MAP(CEditMapPropPlayersPage)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEditMapPropPlayersPage message handlers
