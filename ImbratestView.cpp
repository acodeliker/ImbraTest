// ImbratestView.cpp : CImbratestView ���ʵ��
//

#include "stdafx.h"
#include "Imbratest.h"

#include "ImbratestDoc.h"
#include "ImbratestView.h"
using namespace Gdiplus;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CImbratestView

IMPLEMENT_DYNCREATE(CImbratestView, CView)

BEGIN_MESSAGE_MAP(CImbratestView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CImbratestView ����/����

CImbratestView::CImbratestView()
{
	// TODO: �ڴ˴���ӹ������

}

CImbratestView::~CImbratestView()
{
}

BOOL CImbratestView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸� CREATESTRUCT cs ���޸Ĵ������
	// ��ʽ

	return CView::PreCreateWindow(cs);
}

// CImbratestView ����

void CImbratestView::OnDraw(CDC* pDC)
{
	CImbratestDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	CPaintDC dc(this);
	//CDC dc(this);
	//Graphics graphics(dc.m_hDC);
	Graphics graphics(pDC->m_hDC );

	
	// Pen can also be constructed using a brush or another pen. 
            // There is a second parameter - a width which defaults to 1.0f
	
	Pen	blue (Color(255, 0, 0, 255));
	Pen red  (Color(255, 255, 0, 0));

	int y = 256;
	for (int x = 0; x < 256; x += 5)
	{
		graphics.DrawLine(&blue, 0, y, x, 0);
		graphics.DrawLine(&red, 256, x, y, 256);  
		y -= 5;
	}
	
	
	/*Image myimage(L"D:\\Dicom.jpg");
	graphics.DrawImage (& myimage,0,0);
*/

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CImbratestView ��ӡ

BOOL CImbratestView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CImbratestView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��ӡǰ��Ӷ���ĳ�ʼ��
}

void CImbratestView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��ӡ������������
}


// CImbratestView ���

#ifdef _DEBUG
void CImbratestView::AssertValid() const
{
	CView::AssertValid();
}

void CImbratestView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CImbratestDoc* CImbratestView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CImbratestDoc)));
	return (CImbratestDoc*)m_pDocument;
}
#endif //_DEBUG


// CImbratestView ��Ϣ�������
