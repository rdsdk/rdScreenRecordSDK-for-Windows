#ifndef CPREVIEWWND_H
#define CPREVIEWWND_H

#include <QWidget>

class CPreviewWnd : public QWidget
{
	Q_OBJECT

public:
	CPreviewWnd(QWidget *parent);
	~CPreviewWnd();
	void SetUsePreiveImage( BOOL bUse );
	void SetParent( QWidget * parent );
	static	void WINAPI OnPreviewBufferCB( INT iWidth, INT iHeight, LPBYTE pImageBuffer, LPVOID pCbParam );

	BOOL  m_start_up;//启动固定帧率显示预览界面
	QTimer m_timer;//固定预览界面刷新定时器
private:
	
	QWidget * m_parent;
	 
	BOOL	m_bUsePreiveImg;
	HCURSOR	m_hCursor;
	QImage	m_imgPreview;
	QMutex	m_mutex;
	UINT MsgFromButton( Qt::MouseButton but, BOOL bPress );
	WPARAM WParamFromBottons( Qt::MouseButtons buts );
	void paintEvent( QPaintEvent * event );
	void mouseMoveEvent( QMouseEvent * event );
	void mousePressEvent( QMouseEvent * event );
	void mouseReleaseEvent( QMouseEvent * event );
	void wheelEvent( QWheelEvent * event );
signals:
	void previewBuffer( int, int, void* );
	void signalsupdate();
	
public slots:
	void on_timer();
	void on_signalsupdate();//更新
	//void onGameListChanged( quint32 dwPID, qint32 iInterface );};
};
#endif // CPREVIEWWND_H
