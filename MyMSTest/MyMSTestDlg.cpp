// MyMSTestDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MyMSTest.h"
#include "MyMSTestDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMyMSTestDlg dialog

CMyMSTestDlg::CMyMSTestDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMyMSTestDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMyMSTestDlg)
	m_radio2 = 0;
	m_radio7 = 0;
	m_radio12 = 0;
	m_radio17 = 0;
	m_radio22 = 0;
	m_radio27 = 0;
	m_radio32 = 0;
	m_radio37 = 0;
	m_radio42 = 0;
	m_radio47 = 0;
	m_edit2 = _T("测试结果");
	m_edit3 = _T("所选值");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMyMSTestDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMyMSTestDlg)
	DDX_Radio(pDX, IDC_RADIO2, m_radio2);
	DDX_Radio(pDX, IDC_RADIO7, m_radio7);
	DDX_Radio(pDX, IDC_RADIO12, m_radio12);
	DDX_Radio(pDX, IDC_RADIO17, m_radio17);
	DDX_Radio(pDX, IDC_RADIO22, m_radio22);
	DDX_Radio(pDX, IDC_RADIO27, m_radio27);
	DDX_Radio(pDX, IDC_RADIO32, m_radio32);
	DDX_Radio(pDX, IDC_RADIO37, m_radio37);
	DDX_Radio(pDX, IDC_RADIO42, m_radio42);
	DDX_Radio(pDX, IDC_RADIO47, m_radio47);
	DDX_Text(pDX, IDC_EDIT2, m_edit2);
	DDX_Text(pDX, IDC_EDIT3, m_edit3);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CMyMSTestDlg, CDialog)
	//{{AFX_MSG_MAP(CMyMSTestDlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyMSTestDlg message handlers

BOOL CMyMSTestDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMyMSTestDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMyMSTestDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CMyMSTestDlg::OnButton2() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	
	m_MSClass.arr[0]=m_radio2+1;
	m_MSClass.arr[1]=m_radio7+1;
	m_MSClass.arr[2]=m_radio12+1;
	m_MSClass.arr[3]=m_radio17+1;
	m_MSClass.arr[4]=m_radio22+1;
	m_MSClass.arr[5]=m_radio27+1;
	m_MSClass.arr[6]=m_radio32+1;
	m_MSClass.arr[7]=m_radio37+1;
	m_MSClass.arr[8]=m_radio42+1;
	m_MSClass.arr[9]=m_radio47+1;

	CString l_enum[5]={"a","b","c","d","e"};
	CString edit3;
	edit3.Format(_T("%s,%s,%s,%s,%s,%s,%s,%s,%s,%s"),l_enum[m_radio2],l_enum[m_radio7],l_enum[m_radio12],l_enum[m_radio17],l_enum[m_radio22],l_enum[m_radio27],l_enum[m_radio32],l_enum[m_radio37],l_enum[m_radio42],l_enum[m_radio47]);
	m_MSClass.parsearr();
	m_edit2=m_MSClass.result;
	m_edit3=edit3;
	UpdateData(FALSE);
}

void CMyMSTestDlg::OnButton1() 
{
	// TODO: Add your control notification handler code here
	this->test(9);
}

void CMyMSTestDlg::test(int k)
{
	if(k>=0&&k<=9){
		for(int l=1;l<=5;l++){
			m_MSClass.arr[k]=l;
			test(k-1);
		}
	}else{	
		m_radio2=m_MSClass.arr[0]-1;
		m_radio7=m_MSClass.arr[1]-1;
		m_radio12=m_MSClass.arr[2]-1;
		m_radio17=m_MSClass.arr[3]-1;
		m_radio22=m_MSClass.arr[4]-1;
		m_radio27=m_MSClass.arr[5]-1;
		m_radio32=m_MSClass.arr[6]-1;
		m_radio37=m_MSClass.arr[7]-1;
		m_radio42=m_MSClass.arr[8]-1;
		m_radio47=m_MSClass.arr[9]-1;	
		CString l_enum[5]={"a","b","c","d","e"};
		CString edit3;
		edit3.Format(_T("%s,%s,%s,%s,%s,%s,%s,%s,%s,%s"),l_enum[m_radio2],l_enum[m_radio7],l_enum[m_radio12],l_enum[m_radio17],l_enum[m_radio22],l_enum[m_radio27],l_enum[m_radio32],l_enum[m_radio37],l_enum[m_radio42],l_enum[m_radio47]);
		m_MSClass.parsearr();
		m_edit2=m_MSClass.result;
		m_edit3=edit3;
		UpdateData(FALSE);
		UpdateWindow();
		if(m_edit2=="正确答案")
		{
			::AfxMessageBox("找到答案");
		}
	}
}
