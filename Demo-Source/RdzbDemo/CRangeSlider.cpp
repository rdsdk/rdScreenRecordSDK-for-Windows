#include "StdAfx.h"
#include "CRangeSlider.h"

CRangeSlider::CRangeSlider(QWidget *parent)
: QWidget(parent)
{
	m_fMax		= 1.0;
	m_fMin		= 0.0;
	m_fAreaMin	= 0.0;
	m_fAreaMax	= 1.0;
	m_fValue	= 0.0;
	m_eHit		= eHit_None;
	m_eDisp		= eDispBoth;
	m_iPrevPos	= -1;
	m_fPrevVal	= 0.0;

	m_sStyle.iBorderLineWidth	= 1;
	m_sStyle.coBorderLine		= QColor( 47, 49, 55 );
	m_sStyle.coBackgroup		= QColor( 22, 33, 51 );
	m_sStyle.coAreaBar		= QColor(  47, 49, 55 );
	m_sStyle.coValue		= QColor(  137, 91, 30  );

	m_sStyle.bHitMinSpace	= true;
	m_sStyle.bHitMaxSpace	= true;
	m_sStyle.bHitMinLine	= true;
	m_sStyle.bHitMaxLine	= true;
	m_sStyle.bHitAreaBar	= true;
	m_sStyle.bHitValue		= true;
	m_sStyle.eFormat	= eTextFloat;
	m_sStyle.iPrecision	= 2;

	m_sStyle.bIsSpaceValue	= true;
	m_sStyle.sMinText.coText	= QColor( 170, 204, 254 );
	m_sStyle.sMinText.eAlign	= eAlignFar;
	m_sStyle.sMinText.iSpace		= 1;

	m_sStyle.sMaxText.coText	= QColor( 170, 204, 254 );
	m_sStyle.sMaxText.eAlign	= eAlignFar;
	m_sStyle.sMaxText.iSpace		= 1;

	m_sStyle.sAreaText.coText	= QColor( 170, 204, 254 );
	m_sStyle.sAreaText.eAlign	= eAlignCenter;
	m_sStyle.sAreaText.iSpace		= 1;

	m_sStyle.bDrawValueBar	= true;
	m_sStyle.bTextAlignBar	= true;
	m_sStyle.sValueText.coText	= QColor( 170, 204, 254 );
	m_sStyle.sValueText.eAlign	= eAlignFar;
	m_sStyle.sValueText.iSpace		= 1;

	m_sStyle.sValueTextSub.coText	= QColor( 170, 204, 254 );
	m_sStyle.sValueTextSub.eAlign	= eAlignFar;
	m_sStyle.sValueTextSub.iSpace		= 1;

	m_iMinLine		= 0;
	m_iMaxLine		= 0;
	m_iPosValue		= 0;

	setMouseTracking( true );
}

CRangeSlider::~CRangeSlider()
{

}

void CRangeSlider::SetRange( double fMin, double fMax )
{
	if ( fMin < fMax )
	{
		m_fMin	= fMin;
		m_fMax	= fMax;
	}
	else
	{
		m_fMin	= fMax;
		m_fMax	= fMin;
	}
	CalcPos();
}

void CRangeSlider::GetRange( double* pMin, double* pMax )
{
	if ( pMin ) *pMin	= m_fMin;
	if ( pMax ) *pMax	= m_fMax;
}

void CRangeSlider::SetArea( double fAreaMin, double fAreaMax )
{
	if ( fAreaMin < fAreaMax )
	{
		m_fAreaMin	= fAreaMin;
		m_fAreaMax	= fAreaMax;
	}
	else
	{
		m_fAreaMin	= fAreaMax;
		m_fAreaMax	= fAreaMin;
	}
	CalcPos();
}

void CRangeSlider::SetValue( double fValue )
{
	if ( m_eHit == eHit_Value && m_iPrevPos >= 0 ) return;
	m_fValue	= fValue;
	CalcPos();
}

void CRangeSlider::SetStyle( const SStyle& sStyle )
{
	m_sStyle		= sStyle;
	CalcPos();
}

void CRangeSlider::SetDispMode( EDispMode eMode )
{
	m_eDisp	= eMode;
	qDebug() <<"DispMode:" <<m_eDisp;
	CalcPos();
}

void CRangeSlider::resizeEvent ( QResizeEvent * event )
{
	CalcPos( false, event->size().width(), event->size().height() );
}

void CRangeSlider::CalcPos( bool bRepaint, int iWidth, int iHeight )
{
	if ( iWidth <= 0 ) iWidth = width();
	if ( iHeight <= 0 ) iHeight = height();
	int		iAreaMin, iAreaMax;
	double	fRange	= m_fMax - m_fMin;

	m_iSize		= iWidth;
	m_iSize		-=	m_sStyle.iBorderLineWidth * 2;

	m_fAreaMin	= qMax( m_fMin, m_fAreaMin );
	m_fAreaMin	= qMin( m_fMax, m_fAreaMin );
	m_fAreaMax	= qMin( m_fMax, m_fAreaMax );
	m_fAreaMax	= qMax( m_fMin, m_fAreaMax );
	m_fValue	= qMax( m_fValue, m_fAreaMin );
	m_fValue	= qMin( m_fValue, m_fAreaMax );

	if ( m_eDisp == eDispValue )
	{
		m_iMinLine	= m_sStyle.iBorderLineWidth;
		m_iMaxLine	= m_iSize + m_sStyle.iBorderLineWidth - 1;
		m_iPosValue	= ( m_fValue - m_fAreaMin ) / ( m_fAreaMax - m_fAreaMin ) * m_iSize + m_sStyle.iBorderLineWidth;
	}
	else
	{
		m_iMinLine	= ( m_fAreaMin - m_fMin ) / fRange * m_iSize + m_sStyle.iBorderLineWidth;
		m_iMaxLine	= ( m_fAreaMax - m_fMin ) / fRange * m_iSize + m_sStyle.iBorderLineWidth - 1;
		m_iPosValue	= ( m_fValue - m_fMin ) / fRange * m_iSize + m_sStyle.iBorderLineWidth;
	}
	if ( m_iMinLine > m_iMaxLine && ( m_iMinLine > m_sStyle.iBorderLineWidth && m_iMaxLine < m_iSize + m_sStyle.iBorderLineWidth - 1 ) )
	{
		m_rtArea.setRect( m_iMaxLine, 0, 1, iHeight );
	}
	else
	{
		m_rtArea.setRect( m_iMinLine, 0, m_iMaxLine - m_iMinLine + 1, iHeight );
	}
	m_rtValue.setRect( m_iMinLine, 0, m_iPosValue - m_iMinLine, iHeight );


	if ( m_sStyle.bTextAlignBar )
	{
		m_rtMinText.setRect( m_sStyle.iBorderLineWidth + m_sStyle.sMinText.iSpace, 0,
			m_iSize - m_sStyle.sMinText.iSpace * 2, iHeight );
		m_rtMaxText.setRect( m_sStyle.iBorderLineWidth + m_sStyle.sMaxText.iSpace, 0,
			m_iSize - m_sStyle.sMaxText.iSpace * 2, iHeight );
		m_rtAreaText.setRect( m_sStyle.iBorderLineWidth + m_sStyle.sAreaText.iSpace, 0,
			m_iSize - m_sStyle.sAreaText.iSpace * 2, iHeight );

		m_rtValueText.setRect( m_iMinLine + m_sStyle.sValueText.iSpace, 0,
			m_iMaxLine - m_iMinLine - m_sStyle.sValueText.iSpace * 2, iHeight );
		m_rtValueTextSub.setRect( m_iMinLine + m_sStyle.sValueTextSub.iSpace, 0,
			m_iMaxLine - m_iMinLine - m_sStyle.sValueTextSub.iSpace * 2, iHeight );
	}
	else
	{
		m_rtMinText.setRect( m_sStyle.iBorderLineWidth + m_sStyle.sMinText.iSpace, 0,
			m_iMinLine - m_sStyle.sMinText.iSpace - ( m_sStyle.iBorderLineWidth + m_sStyle.sMinText.iSpace ), iHeight );
		m_rtMaxText.setRect( m_iMaxLine + m_sStyle.sMaxText.iSpace, 0,
			iWidth - m_sStyle.sMaxText.iSpace - m_sStyle.iBorderLineWidth - ( m_iMaxLine + m_sStyle.sMaxText.iSpace ), iHeight );
		m_rtAreaText.setRect( m_rtArea.x() + m_sStyle.sAreaText.iSpace, 0,
			m_rtArea.width() - m_sStyle.sAreaText.iSpace * 2, iHeight );

		m_rtValueText.setRect( m_iMinLine + m_sStyle.sValueText.iSpace, 0,
			m_iPosValue - m_iMinLine - m_sStyle.sValueText.iSpace * 2, iHeight );
		m_rtValueTextSub.setRect( m_iPosValue + m_sStyle.sValueTextSub.iSpace, 0,
			m_iMaxLine - m_iPosValue - m_sStyle.sValueTextSub.iSpace * 2, iHeight );
	}
	if ( m_sStyle.eFormat == eTextPercent )
	{
		CalcText( m_szMinText, ( m_fAreaMin - m_fMin ) / ( m_fMax - m_fMin ) );
		CalcText( m_szMaxText, ( m_fMax - m_fAreaMax ) / ( m_fMax - m_fMin ) );
		if ( m_sStyle.bIsSpaceValue )
		{
			CalcText( m_szValueText, ( m_fValue - m_fAreaMin ) / ( m_fAreaMax - m_fAreaMin ) );
			CalcText( m_szValueTextSub, ( m_fAreaMax - m_fValue ) / ( m_fAreaMax - m_fAreaMin ) );
		}
		else
		{
			CalcText( m_szValueText, ( m_fValue - m_fAreaMin ) / ( m_fMax - m_fMin ) );
			CalcText( m_szValueTextSub, ( m_fAreaMax - m_fValue ) / ( m_fMax - m_fMin ) );
		}
		CalcText( m_szAreaText, ( m_fAreaMax - m_fAreaMin ) / ( m_fMax - m_fMin ) );
	}
	else if ( m_sStyle.bIsSpaceValue )
	{
		CalcText( m_szMinText, m_fAreaMin - m_fMin );
		CalcText( m_szMaxText, m_fMax - m_fAreaMax );
		CalcText( m_szValueText, m_fValue - m_fAreaMin );
		CalcText( m_szValueTextSub, m_fAreaMax - m_fValue );
		CalcText( m_szAreaText, m_fAreaMax - m_fAreaMin );
	}
	else
	{
		CalcText( m_szMinText, m_fAreaMin );
		CalcText( m_szMaxText, m_fAreaMax );
		CalcText( m_szValueText, m_fValue );
		CalcText( m_szValueTextSub, m_fMax - m_fValue );
		CalcText( m_szAreaText, m_fAreaMax - m_fAreaMin );
	}
	bRepaint ? repaint() : update();
}

void CRangeSlider::CalcText( QString& szOutStr, double fValue )
{
	switch( m_sStyle.eFormat )
	{
	case eTextFloat:
		szOutStr	= QString( "%1" ).arg( fValue, 0, 'f', m_sStyle.iPrecision );
		break;
	case eTextPercent:
		szOutStr	= QString( "%1%" ).arg( fValue, 0, 'f', m_sStyle.iPrecision );
		break;
	case eTextHMS:
	case eTextHMSAuto:
		{
			int	iHour	= int( fValue/ 60.0 / 60.0 );
			fValue	-= iHour * 60.0 * 60.0;
			int	iMinute	= int( fValue / 60.0 );
			fValue	-= iMinute * 60.0;
			int	iSecond	= int( fValue );
			fValue	-= iSecond;
			szOutStr	= "";
			if ( iHour || m_sStyle.eFormat == eTextHMS )
			{
				if ( m_sStyle.eFormat == eTextHMSAuto )
					szOutStr	= QString( "%1:%2:%3" ).arg( iHour )
					.arg( iMinute, 2, 10, QChar( '0' ) )
					.arg( iSecond, 2, 10, QChar( '0' ) );
				else
					szOutStr	= QString( "%1:%2:%3" ).arg( iHour, 2, 10, QChar( '0' ) )
					.arg( iMinute, 2, 10, QChar( '0' ) )
					.arg( iSecond, 2, 10, QChar( '0' ) );
			}
			else
			{
				szOutStr	= QString( "%1:%2" ).arg( iMinute, 2, 10, QChar( '0' ) )
					.arg( iSecond, 2, 10, QChar( '0' ) );
			}

			if ( m_sStyle.iPrecision )
			{
				int	iScale	= 1;
				for ( int i = 0; i < m_sStyle.iPrecision; ++i ) iScale = iScale * 10;
				szOutStr	+= QString( ".%1" ).arg( int( fValue * iScale ), m_sStyle.iPrecision, 10, QChar( '0' ) );
			}
		}
		break;
	}
}

void CRangeSlider::CalcHit( int x, int y )
{
	int		iPos	= x;
	if ( y < m_sStyle.iBorderLineWidth || y >= height() - m_sStyle.iBorderLineWidth )
	{
		setCursor( QCursor( Qt::ArrowCursor ) );
		m_eHit	= eHit_None;
		return;
	}

	if ( m_eDisp == eDispValue )
	{
		if ( m_sStyle.bHitValue && iPos >= m_iPosValue - 2 && iPos <= m_iPosValue + 2 )
		{
			setCursor( QCursor( Qt::SizeHorCursor ) );
			m_eHit	= eHit_Value;			
		}
		else if ( m_sStyle.bHitValue && iPos >= m_iMinLine && iPos <= m_iMaxLine )
		{
			setCursor( QCursor( Qt::ArrowCursor ) );
			m_eHit	= eHit_ValueArea;			
		}
		else
		{
			setCursor( QCursor( Qt::ArrowCursor ) );
			m_eHit	= eHit_None;
		}
	}
	else if ( m_sStyle.bHitValue && m_sStyle.bDrawValueBar && m_eDisp != eDispArea &&
		iPos >= qMax( m_iPosValue - 2, m_iMinLine ) && 
		iPos <= qMin( m_iPosValue + 2, m_iMaxLine ) )
	{
		setCursor( QCursor( Qt::SizeHorCursor ) );
		m_eHit	= eHit_Value;			
	}
	else if ( m_sStyle.bHitMinLine && m_iMaxLine > m_sStyle.iBorderLineWidth &&
		iPos >= m_iMinLine - 2 && iPos <= m_iMinLine + 2 )
	{
		setCursor( QCursor( Qt::SizeHorCursor ) );
		m_eHit	= eHit_MinLine;
	}
	else if ( m_sStyle.bHitMaxLine && m_iMinLine < width() - m_sStyle.iBorderLineWidth - 1 &&
		iPos >= m_iMaxLine - 2 && iPos <= m_iMaxLine + 2 )
	{
		setCursor( QCursor( Qt::SizeHorCursor ) );
		m_eHit	= eHit_MaxLine;
	}
	else if ( iPos >= m_iMinLine && iPos <= m_iMaxLine )
	{
		if ( m_sStyle.bHitValue && m_sStyle.bDrawValueBar && !m_sStyle.bHitAreaBar && m_eDisp != eDispArea )
		{
			setCursor( QCursor( Qt::ArrowCursor ) );
			m_eHit	= eHit_ValueArea;			
		}
		else if ( m_sStyle.bHitAreaBar )
		{
			setCursor( QCursor( Qt::SizeAllCursor ) );
			m_eHit	= eHit_AreaBar;
		}
		else if ( m_sStyle.bHitMinSpace && !m_sStyle.bHitMaxSpace )
		{
			setCursor( QCursor( Qt::ArrowCursor ) );
			m_eHit	= eHit_MinSpace;
		}
		else if ( !m_sStyle.bHitMinSpace && m_sStyle.bHitMaxSpace )
		{
			setCursor( QCursor( Qt::ArrowCursor ) );
			m_eHit	= eHit_MaxSpace;
		}
	}
	else if ( m_sStyle.bHitMinSpace &&
		iPos < m_iMinLine && iPos >= m_sStyle.iBorderLineWidth )
	{
		setCursor( QCursor( Qt::ArrowCursor ) );
		m_eHit	= eHit_MinSpace;
	}
	else if ( m_sStyle.bHitMaxSpace &&
		iPos > m_iMaxLine && iPos < m_iSize + m_sStyle.iBorderLineWidth )
	{
		setCursor( QCursor( Qt::ArrowCursor ) );
		m_eHit	= eHit_MaxSpace;
	}
	else
	{
		setCursor( QCursor( Qt::ArrowCursor ) );
		m_eHit	= eHit_None;
	}
}

void CRangeSlider::mouseMoveEvent ( QMouseEvent * event )
{
	if ( event->buttons() == Qt::LeftButton  )
	{
		switch( m_eHit )
		{
		case eHit_None:
			break;
		case eHit_MinLine:
			m_fAreaMin	= m_fPrevVal + ( event->pos().x() - m_iPrevPos ) * ( m_fMax - m_fMin ) / m_iSize;
			if ( m_fAreaMin > m_fAreaMax ) m_fAreaMin = m_fAreaMax;
			CalcPos( true );
			emit areaChanged( m_fAreaMin, m_fAreaMax );
			break;
		case eHit_MaxLine:
			m_fAreaMax	= m_fPrevVal + ( event->pos().x() - m_iPrevPos ) * ( m_fMax - m_fMin ) / m_iSize;
			if ( m_fAreaMax < m_fAreaMin ) m_fAreaMax = m_fAreaMin;
			CalcPos( true );
			emit areaChanged( m_fAreaMin, m_fAreaMax );
			break;
		case eHit_AreaBar:
			{
				double	fSize	= m_fAreaMax - m_fAreaMin;
				m_fAreaMin	= m_fPrevVal + ( event->pos().x() - m_iPrevPos ) * ( m_fMax - m_fMin ) / m_iSize;
				if ( m_fAreaMin < m_fMin ) m_fAreaMin = m_fMin;
				if ( m_fAreaMin + fSize > m_fMax ) m_fAreaMin = m_fMax - fSize;
				m_fAreaMax	= m_fAreaMin + fSize;
				CalcPos( true );
				emit areaChanged( m_fAreaMin, m_fAreaMax );
			}
			break;	
		case eHit_Value:
			if ( m_eDisp == eDispValue )
			{
				m_fValue	= m_fPrevVal + ( event->pos().x() - m_iPrevPos ) * ( m_fAreaMax - m_fAreaMin ) / m_iSize;
			}
			else
			{
				m_fValue	= m_fPrevVal + ( event->pos().x() - m_iPrevPos ) * ( m_fMax - m_fMin ) / m_iSize;
			}
			CalcPos( true );
			emit valueChanged( m_fValue );
			break;
		}
	}
	else
	{
		CalcHit( event->pos().x(), event->pos().y() );
	}
}

void CRangeSlider::mousePressEvent ( QMouseEvent * event )
{
	if ( event->button() == Qt::LeftButton )
	{
		switch( m_eHit )
		{
		case eHit_None:
			break;
		case eHit_MinSpace:
			m_fAreaMin	= m_fAreaMin + ( event->pos().x() - m_iMinLine ) * ( m_fMax - m_fMin ) / m_iSize;
			if ( m_fAreaMin > m_fAreaMax ) m_fAreaMin = m_fAreaMax;
			CalcPos();
			CalcHit( event->pos().x(), event->pos().y() );
			m_iPrevPos	= event->pos().x();
			m_fPrevVal	= m_fAreaMin;
			emit areaChanged( m_fAreaMin, m_fAreaMax );
			break;
		case eHit_MaxSpace:
			m_fAreaMax	= m_fAreaMax + ( event->pos().x() - m_iMaxLine ) * ( m_fMax - m_fMin ) / m_iSize;
			if ( m_fAreaMax < m_fAreaMin ) m_fAreaMax = m_fAreaMin;
			CalcPos();
			CalcHit( event->pos().x(), event->pos().y() );
			m_iPrevPos	= event->pos().x();
			m_fPrevVal	= m_fAreaMax;
			emit areaChanged( m_fAreaMin, m_fAreaMax );
			break;
		case eHit_MinLine:
			m_iPrevPos	= event->pos().x();
			m_fPrevVal	= m_fAreaMin;
			break;
		case eHit_MaxLine:
			m_iPrevPos	= event->pos().x();
			m_fPrevVal	= m_fAreaMax;
			break;
		case eHit_AreaBar:
			m_iPrevPos	= event->pos().x();
			m_fPrevVal	= m_fAreaMin;
			break;
		case eHit_Value:
			m_iPrevPos	= event->pos().x();
			m_fPrevVal	= m_fValue;
			break;
		case eHit_ValueArea:
			if ( m_eDisp == eDispValue )
			{
				m_fValue	= m_fValue + ( event->pos().x() - m_iPosValue ) * ( m_fAreaMax - m_fAreaMin ) / m_iSize;
			}
			else
			{
				m_fValue	= m_fValue + ( event->pos().x() - m_iPosValue ) * ( m_fMax - m_fMin ) / m_iSize;
			}
			CalcPos();
			CalcHit( event->pos().x(), event->pos().y() );
			m_iPrevPos	= event->pos().x();
			m_fPrevVal	= m_fValue;
			emit valueChanged( m_fValue );
			break;
		}
	}
}

void CRangeSlider::mouseReleaseEvent ( QMouseEvent * event )
{
	m_iPrevPos = -1;
}

QColor CRangeSlider::CalcColor( const QColor& color )
{
	if ( isEnabled() ) return color;

	float	fColor	= color.red() + color.green() + color.blue();
	fColor	/= 4;
	return QColor( int(fColor), int(fColor), int(fColor), color.alpha() );
}

void CRangeSlider::paintEvent ( QPaintEvent * event )
{
	QPainter	pnt( this );
	QRect		rtDraw	= rect();

	rtDraw.setWidth( rtDraw.width() - 1 );
	rtDraw.setHeight( rtDraw.height() - 1 );
	pnt.setPen( CalcColor( m_sStyle.coBackgroup ) );
	pnt.fillRect( rtDraw, CalcColor( m_sStyle.coBackgroup ) );
	pnt.fillRect( m_rtArea, CalcColor( m_sStyle.coAreaBar ) );
	if ( m_eDisp != eDispArea && ( m_sStyle.bDrawValueBar || m_eDisp == eDispValue ) )
	{
		pnt.fillRect( m_rtValue, CalcColor( m_sStyle.coValue ) );
	}
	pnt.drawRect( rtDraw );

	if ( m_eDisp != eDispValue )
	{
		if ( m_sStyle.sMinText.eAlign && m_rtMinText.width() >= 4 )
		{
			const	int	iAlign[]	= { 0, Qt::AlignLeft, Qt::AlignRight, Qt::AlignCenter };
			pnt.setPen( CalcColor( m_sStyle.sMinText.coText ) );
			pnt.drawText( m_rtMinText, iAlign[ m_sStyle.sMinText.eAlign ] | Qt::AlignVCenter, m_szMinText );
		}
		if ( m_sStyle.sMaxText.eAlign && m_rtMaxText.width() >= 4 )
		{
			const	int	iAlign[]	= { 0, Qt::AlignRight, Qt::AlignLeft, Qt::AlignCenter };
			pnt.setPen( CalcColor( m_sStyle.sMaxText.coText ) );
			pnt.drawText( m_rtMaxText, iAlign[ m_sStyle.sMaxText.eAlign ] | Qt::AlignVCenter, m_szMaxText );
		}
		if ( m_sStyle.sAreaText.eAlign && m_rtAreaText.width() >= 4 )
		{
			const	int	iAlign[]	= { 0, Qt::AlignLeft, Qt::AlignRight, Qt::AlignCenter };
			pnt.setPen( CalcColor( m_sStyle.sAreaText.coText ) );
			pnt.drawText( m_rtAreaText, iAlign[ m_sStyle.sAreaText.eAlign ] | Qt::AlignVCenter, m_szAreaText );
		}
	}
	if ( m_eDisp != eDispArea && ( m_sStyle.bDrawValueBar || m_eDisp == eDispValue ) )
	{
		if ( m_sStyle.sValueText.eAlign && m_rtValueText.width() >= 4 )
		{
			const	int	iAlign[]	= { 0, Qt::AlignLeft, Qt::AlignRight, Qt::AlignCenter };
			pnt.setPen( CalcColor( m_sStyle.sValueText.coText ) );
			pnt.drawText( m_rtValueText, iAlign[ m_sStyle.sValueText.eAlign ] | Qt::AlignVCenter, m_szValueText );
		}
		if ( m_sStyle.sValueTextSub.eAlign && m_rtValueTextSub.width() >= 4 )
		{
			const	int	iAlign[]	= { 0, Qt::AlignRight, Qt::AlignLeft, Qt::AlignCenter };
			pnt.setPen( CalcColor( m_sStyle.sValueTextSub.coText ) );
			pnt.drawText( m_rtValueTextSub, iAlign[ m_sStyle.sValueTextSub.eAlign ] | Qt::AlignVCenter, m_szValueTextSub );
		}
	}
}
