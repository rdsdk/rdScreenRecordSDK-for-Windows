#ifndef MYQRADIOBUTTON_H
#define MYQRADIOBUTTON_H

#include <QRadioButton>

class MyQRadioButton : public QRadioButton
{
	Q_OBJECT

public:
	MyQRadioButton(QWidget *parent);
	~MyQRadioButton();
	
	void OnChipSelected( BOOL bSelect = TRUE );
private:
	
};

#endif // MYQRADIOBUTTON_H
