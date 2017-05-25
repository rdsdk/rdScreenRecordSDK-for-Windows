#include "StdAfx.h"
#include "rdzbdemo.h"
#include "qtxtdialog.h"

QTxtDialog::QTxtDialog(QWidget *parent)
: QDialog(parent)
{
	ui.setupUi(this);
	m_hChip = 0;
	setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint/*| Qt::WindowStaysOnTopHint*/);
	//setAttribute(Qt::WA_TranslucentBackground,true); 
	m_isHM = true;
	m_coTextColor = QColor(Qt::black);
}

QTxtDialog::~QTxtDialog()
{

}
void QTxtDialog::on_Close_pushButton_clicked()
{
	close();
}


bool QTxtDialog::winEvent( MSG* msg, long* result )
{
	if ( msg->message == WM_NCHITTEST )
	{
		QPoint	pos( short(msg->lParam & 0xFFFF), short(DWORD(msg->lParam) >> 16) );
		QWidget*	pWid	= childAt( mapFromGlobal( pos ) );
		if ( pWid == NULL || pWid == ui.label_2 || pWid == ui.label ||  pWid == ui.widget_2)
		{
			*result	= HTCAPTION;
			return true;
		}
	}
	return false;
}

void QTxtDialog::on_texInput_textChanged()
{
	if ( !m_isHM )	return;
	if ( !m_hChip ) return;
	QString	szFlag;
	if ( ui.butTexItalic->isChecked() )	szFlag.append( "I" );
	if ( ui.butTexBold->isChecked() )		szFlag.append( "B" );
	if ( ui.butTexSizeByWidth->isChecked() )	szFlag.append( "W" );

	QString	szText	= QString("%1|%2|%3|%4,%5").arg( ui.fontComboBox->currentText() )
		.arg( szFlag ).arg( m_coTextColor.rgb() ).arg( ui.dspScrollCharPerSecond->value(), 0, 'f', 1 )
		.arg( ui.texInput->toPlainText() );

	Chip_Open( m_hChip, (LPCWSTR)szText.utf16(), FALSE, TRUE );
}

void QTxtDialog::Init( HCHIP HCip /*= 0 */ )
{
	m_isHM = false;
	if ( HCip == 0 )
	{	
		QString	szStyle	= QString( "QPushButton{background-color: rgb(%1, %2, %3);}" )
			.arg( m_coTextColor.red() ).arg( m_coTextColor.green() ).arg( m_coTextColor.blue() );
		ui.butTexColor->setStyleSheet( szStyle );
	}
	else
	{
		m_hChip = HCip;
		ui.widget_3->hide();
		//ui.stackedWidget->setCurrentIndex(1);
		if ( LPCWSTR pSource = Chip_GetSourceName( HCip ) )
		{
			LPCWSTR	pText	= wcschr( pSource, ',' );
			QString str = QFU( pText+1 );
			if ( pText )
			{
				QStringList	szParams	= QString::fromUtf16( pSource, pText - pSource ).split( '|' );
				if ( szParams.count() > 0 )
				{
					int	iSel	= ui.fontComboBox->findText( szParams[0] );
					if ( iSel >= 0 ) ui.fontComboBox->setCurrentIndex( iSel );
				}
				if ( szParams.count() > 1 )
				{
					ui.butTexItalic->setChecked( szParams[1].indexOf( 'I' ) >= 0 );
					ui.butTexBold->setChecked( szParams[1].indexOf( 'B' ) >= 0 );
					ui.butTexSizeByWidth->setChecked( szParams[1].indexOf( 'W' ) >= 0 );
				}
				if ( szParams.count() > 2 )
				{
					m_coTextColor.setRgb( szParams[2].toUInt() );
					QString	szStyle	= QString( "QPushButton{background-color: rgb(%1, %2, %3);}" )
						.arg( m_coTextColor.red() ).arg( m_coTextColor.green() ).arg( m_coTextColor.blue() );
					ui.butTexColor->setStyleSheet( szStyle );
				}
				if ( szParams.count() > 3 )
				{
					ui.dspScrollCharPerSecond->setValue( szParams[3].toFloat() );
				}
				ui.texInput->setText( str );
			}
		}
	}
	m_isHM = true;
}

void QTxtDialog::on_pushButton_clicked()
{
	if( ui.texInput->toPlainText().isEmpty () ) 
	{
		QMessageBox::warning(this,
			QFU(RdzbDemo::InstanceIniWOrR().GetCurrentLanguagePrivateProfileString(L"RdzbDemoSubtitleErrorPointOut",L"PromptCapion")),
			QFU(RdzbDemo::InstanceIniWOrR().GetCurrentLanguagePrivateProfileString(L"RdzbDemoSubtitleErrorPointOut",L"PromptCapionError")),
			QFU(RdzbDemo::InstanceIniWOrR().GetCurrentLanguagePrivateProfileString(L"RdzbDemoSubtitleModification",L"Acknowledgement")) );
		return;
	}
	QString	szFlag;
	if ( ui.butTexItalic->isChecked() )	szFlag.append( "I" );
	if ( ui.butTexBold->isChecked() )		szFlag.append( "B" );
	if ( ui.butTexSizeByWidth->isChecked() )	szFlag.append( "W" );

	QString	szText	= QString("%1|%2|%3|%4,%5").arg( ui.fontComboBox->currentText() )
		.arg( szFlag ).arg( m_coTextColor.rgb() ).arg( ui.dspScrollCharPerSecond->value(), 0, 'f', 1 )
		.arg( ui.texInput->toPlainText() );
	HCHIP	hChip	= Scene_CreateChip( Render_GetCurScene(), ePinInput_Text,
		(LPCWSTR)szText.utf16() );
	if ( hChip )
	{
		Chip_SetRectPercent( hChip, 0.1f, 0.4f, 0.8f, 0.2f, eKeepAspectRatio );
		Chip_SetVisible( hChip, TRUE );
	}
	close();
}

void QTxtDialog::on_fontComboBox_currentFontChanged( const QFont & font )
{
	on_texInput_textChanged();
}

void QTxtDialog::on_butTexItalic_clicked( bool checked )
{
	on_texInput_textChanged();
}

void QTxtDialog::on_butTexBold_clicked( bool checked )
{
	on_texInput_textChanged();
}

void QTxtDialog::on_butTexSizeByWidth_clicked( bool checked )
{
	on_texInput_textChanged();
}

void QTxtDialog::on_dspScrollCharPerSecond_valueChanged( double d )
{
	on_texInput_textChanged();
}

void QTxtDialog::on_butTexColor_clicked()
{
	QColor	coSel	= QColorDialog::getColor( m_coTextColor, this, QFU(L"选择文字颜色") );
	if ( coSel.isValid() )
	{
		m_coTextColor	= coSel;
		QString	szStyle	= QString( "background-color: rgb(%1, %2, %3);" )
			.arg( m_coTextColor.red() ).arg( m_coTextColor.green() ).arg( m_coTextColor.blue() );
		ui.butTexColor->setStyleSheet( szStyle );
		on_texInput_textChanged();
	}
}

void QTxtDialog::LangageChange()
{
	//确认
	RdzbDemo::setControlText( ui.pushButton,L"RdzbDemoSubtitleModification", L"Acknowledgement",EButton);

	//字幕编辑
	RdzbDemo::setControlText( ui.label,L"RdzbDemoSubtitleModification", L"SubtitleEditing",ELabel);
}
