#include "stdafx.h"
#include "myradiobutton.h"

MyRadioButton::MyRadioButton(QWidget *parent)
: QRadioButton(parent)
{
	m_listWidChips = (QListWidget*)parent;
	m_lwItem = new QListWidgetItem;

	int iIndex	= m_listWidChips->count() - 1;
	m_siBase	= size();

	m_listWidChips->insertItem( iIndex, m_lwItem );
	m_listWidChips->setItemWidget( m_lwItem, this );
	m_lwItem->setSizeHint( m_siBase );

}

MyRadioButton::~MyRadioButton()
{

}

void MyRadioButton::OnChipSelected()
{
	setStyleSheet( 
		"QRadioButton{"
		"background-color: rgb(43, 43, 43);"
		"}"
		);
}
