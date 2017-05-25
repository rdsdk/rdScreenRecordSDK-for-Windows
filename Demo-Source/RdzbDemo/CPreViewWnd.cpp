#include "stdafx.h"
#include "cpreviewwnd.h"
#include "rdzbdemo.h"
CPreviewWnd::CPreviewWnd(QWidget *parent)
: QWidget(parent)
{
	m_bUsePreiveImg	= FALSE;
	m_hCursor		= 0;
	setMouseTracking( true );
	connect( this, SIGNAL(signalsupdate()), this, SLOT(on_signalsupdate() ) );
	m_parent = NULL;
	connect( &m_timer, SIGNAL(timeout()), this, SLOT(on_timer( )) );
	m_start_up = true;
	m_timer.start( 70 );
}

CPreviewWnd::~CPreviewWnd()
{
	m_timer.stop();
}

void CPreviewWnd::SetUsePreiveImage( BOOL bUse )
{
	m_bUsePreiveImg	= bUse;
	if ( !m_bUsePreiveImg )
	{
		m_mutex.lock();
		m_imgPreview	= QImage();
		m_mutex.unlock();
	}
}

void WINAPI CPreviewWnd::OnPreviewBufferCB( INT iWidth, INT iHeight, LPBYTE pImageBuffer, LPVOID pCbParam )
{
	CPreviewWnd*	pThis	= (CPreviewWnd*)pCbParam;
	if ( pThis->m_bUsePreiveImg && iWidth > 0 && iHeight > 0 && pImageBuffer )
	{
		pThis->m_mutex.lock();
		if ( pThis->m_imgPreview.width() != iWidth || pThis->m_imgPreview.height() != iHeight )
		{
			pThis->m_imgPreview	= QImage( iWidth, iHeight, QImage::Format_RGB32 );
		}
		memcpy( pThis->m_imgPreview.bits(), pImageBuffer, pThis->m_imgPreview.byteCount() );
		pThis->m_mutex.unlock();
	}
	/*if( pThis->m_start_up )
	{
		pThis->m_timer.start( 50 );
		pThis->m_start_up = FALSE;
	}*/
	//emit pThis->signalsupdate();
}

void CPreviewWnd::paintEvent( QPaintEvent * event )
{
	if ( m_bUsePreiveImg )
	{
		m_mutex.lock();
		if ( !m_imgPreview.isNull() )
		{
			QPainter	pnt( this );
			QRect		rtDraw( ( width() - m_imgPreview.width() ) / 2, ( height() - m_imgPreview.height() ) / 2, m_imgPreview.width(), m_imgPreview.height() );
			rtDraw.setRight( rtDraw.right() - 1 );
			pnt.drawImage( rtDraw, m_imgPreview );
		}
		m_mutex.unlock();
	}
	else
	{
		QPainter	pnt( this );
		pnt.fillRect( rect(), QColor( 64, 64,64, 255 ) );
	}
}

void CPreviewWnd::mouseMoveEvent( QMouseEvent * event )
{
	if( m_parent == NULL ) return;
	if( ((RdzbDemo*)m_parent)->m_bIsClose ) return;
	if ( m_bUsePreiveImg )
	{
		HCURSOR hCursor	= Render_SendPreviewMouseMessage( WM_MOUSEMOVE,
			WParamFromBottons( event->buttons() ),
			event->pos().x() - ( width() - m_imgPreview.width() ) / 2,
			event->pos().y() - ( height() - m_imgPreview.height() ) / 2 );
		if ( hCursor != m_hCursor )
		{
			m_hCursor	= hCursor;
			if ( m_hCursor )
			{
				setCursor( QCursor( m_hCursor ) );
			}
			else
			{
				unsetCursor();
			}
		}
	}
}

UINT CPreviewWnd::MsgFromButton( Qt::MouseButton but, BOOL bPress )
{
	UINT	uMsg		= 0;
	switch( but )
	{
	case Qt::NoButton:		uMsg = 0; break;
	case Qt::LeftButton:	uMsg = bPress ? WM_LBUTTONDOWN : WM_LBUTTONUP; break;
	case Qt::RightButton:	uMsg = bPress ? WM_RBUTTONDOWN : WM_RBUTTONUP; break;
	case Qt::MidButton:		uMsg = bPress ? WM_MBUTTONDOWN : WM_MBUTTONUP; break;
	case Qt::XButton1:		uMsg = bPress ? WM_XBUTTONDOWN : WM_XBUTTONUP; break;
	case Qt::XButton2:		uMsg = bPress ? WM_XBUTTONDOWN : WM_XBUTTONUP; break;
	}
	return uMsg;
}

WPARAM CPreviewWnd::WParamFromBottons( Qt::MouseButtons buts )
{
	WPARAM	wParam	= 0;
	if ( buts & Qt::LeftButton )	wParam	|= MK_LBUTTON;
	if ( buts & Qt::RightButton )	wParam	|= MK_RBUTTON;
	if ( buts & Qt::MidButton )		wParam	|= MK_MBUTTON;
	if ( buts & Qt::XButton1 )		wParam	|= MK_XBUTTON1;
	if ( buts & Qt::XButton2 )		wParam	|= MK_XBUTTON2;
	if ( GetKeyState( VK_CONTROL ) & 0x8000 ) wParam	|= MK_CONTROL;
	return wParam;
}

void CPreviewWnd::mousePressEvent( QMouseEvent * event )
{
	if( m_parent == NULL ) return;
	if( ((RdzbDemo*)m_parent)->m_bIsClose ) return;
	if ( m_bUsePreiveImg )
	{
		Render_SendPreviewMouseMessage( MsgFromButton( event->button(), TRUE ),
			WParamFromBottons( event->buttons() ),
			event->pos().x() - ( width() - m_imgPreview.width() ) / 2,
			event->pos().y() - ( height() - m_imgPreview.height() ) / 2 );
	}
}

void CPreviewWnd::mouseReleaseEvent( QMouseEvent * event )
{
	if( m_parent == NULL ) return;
	if( ((RdzbDemo*)m_parent)->m_bIsClose ) return;
	if ( m_bUsePreiveImg )
	{
		Render_SendPreviewMouseMessage( MsgFromButton( event->button(), FALSE ),
			WParamFromBottons( event->buttons() ),
			event->pos().x() - ( width() - m_imgPreview.width() ) / 2,
			event->pos().y() - ( height() - m_imgPreview.height() ) / 2 );
	}
}

void CPreviewWnd::wheelEvent( QWheelEvent * event )
{
	if ( m_bUsePreiveImg )
	{
	}
}

void CPreviewWnd::on_signalsupdate()
{
	update();
}

void CPreviewWnd::SetParent( QWidget * parent )
{
	m_parent = parent;
}

void CPreviewWnd::on_timer()
{
	emit signalsupdate();
}
