
// PlaneCrashView.h : CPlaneCrashView ��Ľӿ�
//

#pragma once


class CPlaneCrashView : public CView
{
protected: // �������л�����
	CPlaneCrashView();
	DECLARE_DYNCREATE(CPlaneCrashView)

// ����
public:
	CPlaneCrashDoc* GetDocument() const;

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
	virtual ~CPlaneCrashView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	int offsetX;
	int offsetY;
	CRect m_client;

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
};

#ifndef _DEBUG  // PlaneCrashView.cpp �еĵ��԰汾
inline CPlaneCrashDoc* CPlaneCrashView::GetDocument() const
   { return reinterpret_cast<CPlaneCrashDoc*>(m_pDocument); }
#endif
