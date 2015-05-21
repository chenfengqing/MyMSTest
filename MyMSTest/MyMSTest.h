// MyMSTest.h : main header file for the MYMSTEST application
//

#if !defined(AFX_MYMSTEST_H__B10D4198_EF00_49D9_980F_027CC17078AD__INCLUDED_)
#define AFX_MYMSTEST_H__B10D4198_EF00_49D9_980F_027CC17078AD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMyMSTestApp:
// See MyMSTest.cpp for the implementation of this class
//

class CMyMSTestApp : public CWinApp
{
public:
	CMyMSTestApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyMSTestApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMyMSTestApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYMSTEST_H__B10D4198_EF00_49D9_980F_027CC17078AD__INCLUDED_)
