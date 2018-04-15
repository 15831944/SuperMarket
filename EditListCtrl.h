 #if !defined(AFX_EDITLISTCTRL_H__4C831265_E131_46BD_9068_E240AEA76349__INCLUDED_)
#define AFX_EDITLISTCTRL_H__4C831265_E131_46BD_9068_E240AEA76349__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// EditListCtrl.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CEditListCtrl window

class CEditListCtrl : public CListCtrl
{
// Construction
public:
	CEditListCtrl();

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEditListCtrl)
	public:
	virtual BOOL DestroyWindow();
	//}}AFX_VIRTUAL

// Implementation
public:
	void SetEditColomn(int col,BOOL edit);
	virtual ~CEditListCtrl();

	// Generated message map functions
protected:
	//{{AFX_MSG(CEditListCtrl)
	afx_msg void OnSetfocus(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnClick(NMHDR* pNMHDR, LRESULT* pResult);
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
private:
	CEdit * m_edit;//ָ��༭�򣬳�ֵΪNULL
	BOOL * m_isedit;//������б༭���У���ֵΪNULL
	int m_item;//��ǰ�༭���кţ���ֵΪ-1
	int m_subitem;//��ǰ�༭���кţ���ֵΪ-1
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EDITLISTCTRL_H__4C831265_E131_46BD_9068_E240AEA76349__INCLUDED_)
