// ImbratestView.h : CImbratestView ��Ľӿ�
//


#pragma once


class CImbratestView : public CView
{
protected: // �������л�����
	CImbratestView();
	DECLARE_DYNCREATE(CImbratestView)

// ����
public:
	CImbratestDoc* GetDocument() const;

// ����
public:

// ��д
	public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CImbratestView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ImbratestView.cpp �ĵ��԰汾
inline CImbratestDoc* CImbratestView::GetDocument() const
   { return reinterpret_cast<CImbratestDoc*>(m_pDocument); }
#endif

