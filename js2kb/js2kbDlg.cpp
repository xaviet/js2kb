
// js2kbDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "js2kb.h"
#include "js2kbDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cjs2kbDlg 对话框


Cjs2kbDlg::Cjs2kbDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_JS2KB_DIALOG, pParent)
  , mL2(FALSE)
  , mL1(FALSE)
  , mR2(FALSE)
  , mR1(FALSE)
  , mR2Value(_T(""))
  , mR1Value(_T(""))
  , mL2Value(_T(""))
  , mL1Value(_T(""))
  , mYp(FALSE)
  , mYpValue(_T(""))
  , mYn(FALSE)
  , mYnValue(_T(""))
  , mXp(FALSE)
  , mXpValue(_T(""))
  , mXn(FALSE)
  , mXnValue(_T(""))
  , mB1(FALSE)
  , mB1Value(_T(""))
  , mB2(FALSE)
  , mB2Value(_T(""))
  , mB3(FALSE)
  , mB3Value(_T(""))
  , mB4(FALSE)
  , mB4Value(_T(""))
  , mStatus(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void Cjs2kbDlg::DoDataExchange(CDataExchange* pDX)
{
  CDialogEx::DoDataExchange(pDX);
  DDX_Check(pDX, IDC_CHECK1, mL2);
  DDX_Check(pDX, IDC_CHECK2, mL1);
  DDX_Check(pDX, IDC_CHECK3, mR2);
  DDX_Check(pDX, IDC_CHECK4, mR1);
  DDX_Text(pDX, IDC_EDIT2, mR2Value);
  DDV_MaxChars(pDX, mR2Value, 1);
  DDX_Text(pDX, IDC_EDIT3, mR1Value);
  DDV_MaxChars(pDX, mR1Value, 1);
  DDX_Text(pDX, IDC_EDIT4, mL2Value);
  DDV_MaxChars(pDX, mL2Value, 1);
  DDX_Text(pDX, IDC_EDIT5, mL1Value);
  DDV_MaxChars(pDX, mL1Value, 1);
  DDX_Check(pDX, IDC_CHECK5, mYp);
  DDX_Text(pDX, IDC_EDIT6, mYpValue);
  DDV_MaxChars(pDX, mYpValue, 1);
  DDX_Check(pDX, IDC_CHECK6, mYn);
  DDX_Text(pDX, IDC_EDIT7, mYnValue);
  DDV_MaxChars(pDX, mYnValue, 1);
  DDX_Check(pDX, IDC_CHECK7, mXp);
  DDX_Text(pDX, IDC_EDIT8, mXpValue);
  DDV_MaxChars(pDX, mXpValue, 1);
  DDX_Check(pDX, IDC_CHECK8, mXn);
  DDX_Text(pDX, IDC_EDIT9, mXnValue);
  DDV_MaxChars(pDX, mXnValue, 1);
  DDX_Check(pDX, IDC_CHECK9, mB1);
  DDX_Text(pDX, IDC_EDIT10, mB1Value);
  DDV_MaxChars(pDX, mB1Value, 1);
  DDX_Check(pDX, IDC_CHECK12, mB2);
  DDX_Text(pDX, IDC_EDIT13, mB2Value);
  DDV_MaxChars(pDX, mB2Value, 1);
  DDX_Check(pDX, IDC_CHECK10, mB3);
  DDX_Text(pDX, IDC_EDIT11, mB3Value);
  DDV_MaxChars(pDX, mB3Value, 1);
  DDX_Check(pDX, IDC_CHECK11, mB4);
  DDX_Text(pDX, IDC_EDIT12, mB4Value);
  DDV_MaxChars(pDX, mB4Value, 1);
  DDX_Text(pDX, IDC_EDIT1, mStatus);
}

BEGIN_MESSAGE_MAP(Cjs2kbDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
  ON_WM_TIMER()
END_MESSAGE_MAP()


// Cjs2kbDlg 消息处理程序

BOOL Cjs2kbDlg::OnInitDialog()
{
  CDialogEx::OnInitDialog();

  // 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
  //  执行此操作
  SetIcon(m_hIcon, TRUE);			// 设置大图标
  SetIcon(m_hIcon, FALSE);		// 设置小图标

  // TODO: 在此添加额外的初始化代码

  UpdateData(TRUE);
  mR2Value = _T("R");
  mR1Value = _T("F");
  mL2Value = _T("T");
  mL1Value = _T("G");
  mYpValue = _T("W");
  mYnValue = _T("S");
  mXpValue = _T("A");
  mXnValue = _T("D");
  mB1Value = _T("I");
  mB2Value = _T("L");
  mB3Value = _T("K");
  mB4Value = _T("J");
  UpdateData(FALSE);

  mKb2int[_T("A")] = 65;
  mKb2int[_T("B")] = 66;
  mKb2int[_T("C")] = 67;
  mKb2int[_T("D")] = 68;
  mKb2int[_T("E")] = 69;
  mKb2int[_T("F")] = 70;
  mKb2int[_T("G")] = 71;
  mKb2int[_T("H")] = 72;
  mKb2int[_T("I")] = 73;
  mKb2int[_T("J")] = 74;
  mKb2int[_T("K")] = 75;
  mKb2int[_T("L")] = 76;
  mKb2int[_T("M")] = 77;
  mKb2int[_T("N")] = 78;
  mKb2int[_T("O")] = 79;
  mKb2int[_T("P")] = 80;
  mKb2int[_T("Q")] = 81;
  mKb2int[_T("R")] = 82;
  mKb2int[_T("S")] = 83;
  mKb2int[_T("T")] = 84;
  mKb2int[_T("U")] = 85;
  mKb2int[_T("V")] = 86;
  mKb2int[_T("W")] = 87;
  mKb2int[_T("X")] = 88;
  mKb2int[_T("Y")] = 89;
  mKb2int[_T("Z")] = 90;
  mKb2int[_T("0")] = 48;
  mKb2int[_T("1")] = 49;
  mKb2int[_T("2")] = 50;
  mKb2int[_T("3")] = 51;
  mKb2int[_T("4")] = 52;
  mKb2int[_T("5")] = 53;
  mKb2int[_T("6")] = 54;
  mKb2int[_T("7")] = 55;
  mKb2int[_T("8")] = 56;
  mKb2int[_T("9")] = 57;

  JOYCAPS mJsCaps;
  mJsInfo.dwFlags = JOY_RETURNALL;
  if ((joyGetNumDevs() <= 0) || (JOYERR_NOERROR != joyGetDevCaps(JOYSTICKID1, &mJsCaps, sizeof(mJsCaps))))
  {
    return(FALSE);
  }

  SetTimer(13, 8, 0);

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void Cjs2kbDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR Cjs2kbDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

int Cjs2kbDlg::js2kbActive()
{
  int tKbSet = 0;
  UpdateData(TRUE);
  joyGetPosEx(JOYSTICKID1, &mJsInfo);

  mB1 = (mJsInfo.dwButtons & 0x1) != 0x0;
  tKbSet = mB1 ? 0 : KEYEVENTF_KEYUP;
  keybd_event(mKb2int[mB1Value], 0, tKbSet, 0);

  mB2 = (mJsInfo.dwButtons & 0x2) != 0x0;
  tKbSet = mB2 ? 0 : KEYEVENTF_KEYUP;
  keybd_event(mKb2int[mB2Value], 0, tKbSet, 0);

  mB3 = (mJsInfo.dwButtons & 0x4) != 0x0;
  tKbSet = mB3 ? 0 : KEYEVENTF_KEYUP;
  keybd_event(mKb2int[mB3Value], 0, tKbSet, 0);

  mL2 = (mJsInfo.dwButtons & 0x40) != 0x0;
  tKbSet = mL2 ? 0 : KEYEVENTF_KEYUP;
  keybd_event(mKb2int[mL2Value], 0, tKbSet, 0);

  mXp = (mJsInfo.dwXpos == 0x0);
  tKbSet = mXp ? 0 : KEYEVENTF_KEYUP;
  keybd_event(mKb2int[mXpValue], 0, tKbSet, 0);

  mXn = (mJsInfo.dwXpos == 0xffff);
  tKbSet = mXn ? 0 : KEYEVENTF_KEYUP;
  keybd_event(mKb2int[mXnValue], 0, tKbSet, 0);

/*
  int tYp = (mJsInfo.dwYpos == 0x0);
  if (mYp != tYp)
  {
    int tKbSet = tYp ? 0 : KEYEVENTF_KEYUP;
    keybd_event(87, MapVirtualKey(87, 0), tKbSet, 0);
    mYp = tYp;
  }
  int tYn = (mJsInfo.dwYpos == 0xffff);
  if (mYn != tYn)
  {
    int tKbSet = tYn ? 0 : KEYEVENTF_KEYUP;
    keybd_event(83, MapVirtualKey(83, 0), tKbSet, 0);
    mYn = tYn;
  }
  mStatus.Format(_T("%x"), mJsInfo.dwXpos);
*/
  UpdateData(FALSE);
  return(0);
}

void Cjs2kbDlg::OnTimer(UINT_PTR nIDEvent)
{
  // TODO: 在此添加消息处理程序代码和/或调用默认值

  switch (nIDEvent)
  {
  case 13:
    js2kbActive();
    break;
  default:
    break;
  }

  CDialogEx::OnTimer(nIDEvent);
}
