
// js2kb.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Cjs2kbApp: 
// �йش����ʵ�֣������ js2kb.cpp
//

class Cjs2kbApp : public CWinApp
{
public:
	Cjs2kbApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Cjs2kbApp theApp;
