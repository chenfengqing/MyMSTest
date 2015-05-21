// MyMSTestDlg.h : header file
//

#if !defined(AFX_MYMSTESTDLG_H__81DDE1E7_4EC7_42E4_A35D_B3DF823C5302__INCLUDED_)
#define AFX_MYMSTESTDLG_H__81DDE1E7_4EC7_42E4_A35D_B3DF823C5302__INCLUDED_

#include "MyMSClass.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
/////////////////////////////////////////////////////////////////////////////
// CMyMSTestDlg dialog

class CMyMSTestDlg : public CDialog
{
// Construction
public:
	void test(int k);
	CMyMSClass m_MSClass;
	CString l_enum[5];
	CString edit3;
	CMyMSTestDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMyMSTestDlg)
	enum { IDD = IDD_MYMSTEST_DIALOG };
	int		m_radio2;
	int		m_radio7;
	int		m_radio12;
	int		m_radio17;
	int		m_radio22;
	int		m_radio27;
	int		m_radio32;
	int		m_radio37;
	int		m_radio42;
	int		m_radio47;
	CString	m_edit2;
	CString	m_edit3;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyMSTestDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMyMSTestDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton2();
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYMSTESTDLG_H__81DDE1E7_4EC7_42E4_A35D_B3DF823C5302__INCLUDED_)
