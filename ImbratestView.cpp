// ImbratestView.cpp : CImbratestView 类的实现
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
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CImbratestView 构造/析构

CImbratestView::CImbratestView()
{
	// TODO: 在此处添加构造代码

}

CImbratestView::~CImbratestView()
{
}

BOOL CImbratestView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改 CREATESTRUCT cs 来修改窗口类或
	// 样式

	return CView::PreCreateWindow(cs);
}

// CImbratestView 绘制

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

	// TODO: 在此处为本机数据添加绘制代码
}


// CImbratestView 打印

BOOL CImbratestView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CImbratestView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 打印前添加额外的初始化
}

void CImbratestView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 打印后添加清除过程
}


// CImbratestView 诊断

#ifdef _DEBUG
void CImbratestView::AssertValid() const
{
	CView::AssertValid();
}

void CImbratestView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CImbratestDoc* CImbratestView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CImbratestDoc)));
	return (CImbratestDoc*)m_pDocument;
}
#endif //_DEBUG


// CImbratestView 消息处理程序
