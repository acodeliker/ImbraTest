// Imbratest.h : Imbratest Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error �ڰ������� PCH �Ĵ��ļ�֮ǰ������stdafx.h�� 
#endif

#include "resource.h"       // ������


// CImbratestApp:
// �йش����ʵ�֣������ Imbratest.cpp
//

class CImbratestApp : public CWinApp
{
public:
	CImbratestApp();

protected:
    ULONG_PTR m_gdiplusToken;


// ��д
public:
	virtual BOOL InitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
	virtual int ExitInstance();
};

extern CImbratestApp theApp;
