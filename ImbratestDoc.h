// ImbratestDoc.h :  CImbratestDoc ��Ľӿ�
//


#pragma once

class CImbratestDoc : public CDocument
{
protected: // �������л�����
	CImbratestDoc();
	DECLARE_DYNCREATE(CImbratestDoc)

// ����
public:

// ����
public:

// ��д
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// ʵ��
public:
	virtual ~CImbratestDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnOpenDocument(LPCTSTR lpszPathName);
};


