
// js2kbDlg.h : ͷ�ļ�
//

#pragma once

#include "map"
#include "mmsystem.h"
#pragma comment(lib, "winmm.lib")

using namespace std;

// Cjs2kbDlg �Ի���
class Cjs2kbDlg : public CDialogEx
{
// ����
public:
	Cjs2kbDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_JS2KB_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()


public:
  BOOL mL2;
  BOOL mL1;
  BOOL mR2;
  BOOL mR1;
  CString mR2Value;
  CString mR1Value;
  CString mL2Value;
  CString mL1Value;
  BOOL mYp;
  CString mYpValue;
  BOOL mYn;
  CString mYnValue;
  BOOL mXp;
  CString mXpValue;
  BOOL mXn;
  CString mXnValue;
  BOOL mB1;
  CString mB1Value;
  BOOL mB2;
  CString mB2Value;
  BOOL mB3;
  CString mB3Value;
  BOOL mB4;
  CString mB4Value;
  struct joyinfoex_tag mJsInfo;
  afx_msg void OnTimer(UINT_PTR nIDEvent);
  int js2kbActive();
  CString mStatus;
  map<CString, int> mKb2int;
};
