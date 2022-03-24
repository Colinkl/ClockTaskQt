#include "QtWidgetsApplication1.h"


QtWidgetsApplication1::QtWidgetsApplication1(QWidget* parent)
	: QMainWindow(parent)
{




	QLabel* timeLabel = new QLabel(this);
	QLabel* bTimeLabel = new QLabel(this);

	button = new QPushButton("tick", this);
	button->setGeometry(QRect(QPoint(100, 500), QSize(200, 50)));
	connect(button, &QPushButton::released, this, &QtWidgetsApplication1::handleButton);



	clock = new Clock(timeLabel);

	clock->set(12, 11, 59);
	clock->print();
	clock->tick();
	clock->print();



	bClock = new BorderedClock(bTimeLabel);

	bClock->set(10, 59, 59);
	bClock->print();


	this->show();

}

void QtWidgetsApplication1::handleButton() {

	clock->tick();
	bClock->tick();
	clock->print();
	bClock->print();
}
