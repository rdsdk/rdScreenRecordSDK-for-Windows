#ifndef QDRAGLISTWIDGET_H
#define QDRAGLISTWIDGET_H

#include <QListWidget>

class QDragListWidget : public QListWidget
{
	Q_OBJECT

public:
	QDragListWidget(QWidget *parent);
	~QDragListWidget();

private:
	bool  eventFilter( QObject * watched, QEvent * event  );
};

#endif // QDRAGLISTWIDGET_H
