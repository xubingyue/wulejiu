// CenterServerDlg.h : ͷ�ļ�
//

#pragma once

#include "SysInfoList.h"
#include "GameLogonManage.h"

#include "TrayIcon.h"
#include <list>

// CCenterServerDlg �Ի���
class CMainServerDlg : public CDialog
{
	CTrayIcon			m_TrayIcon;				//������ͼ��///
	CGameLogonModule	m_GameLogon;
	list<CString>		m_ListShortNotice;		//�洢��Ѷ����
// ����
public:
    void CMainServerDlg::OutputFun(const CString & message);
	CMainServerDlg(CWnd* pParent = NULL);	// ��׼���캯��
	LRESULT OnCreateTray(WPARAM wp, LPARAM lp);
// �Ի�������
	//enum { IDD = IDD_MAINSERVER_DIALOG};

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
	CSysInfoList m_listSysRunInfo;
	afx_msg void OnDestroy();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnBnClickedOk();

	afx_msg void OnSize(UINT nType, int cx, int cy);////
	LRESULT OnTrayIconNotify(WPARAM wID, LPARAM lEvent);////
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);///

public:
	afx_msg void OnBnClickedBtnnews();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};