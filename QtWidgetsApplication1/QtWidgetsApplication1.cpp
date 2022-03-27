#include "QtWidgetsApplication1.h"


QtWidgetsApplication1::QtWidgetsApplication1(QWidget* parent)
	: QMainWindow(parent)
{
	QWidget* widget = new QWidget;

	QLabel* timeLabel = new QLabel(widget);
	QLabel* bTimeLabel = new QLabel(widget);


	button = new QPushButton("tick", widget);
	connect(button, &QPushButton::released, this, &QtWidgetsApplication1::handleButton);

	QGridLayout* layout = new QGridLayout;
	layout->addWidget(timeLabel, 0, 0);
	layout->addWidget(bTimeLabel, 0, 1);
	layout->addWidget(button, 1, 0, 1, 2);
	widget->setLayout(layout);

	clock = new Clock(timeLabel);

	clock->set(12, 11, 59);
	clock->print();
	clock->tick();
	clock->print();

	bClock = new BorderedClock(bTimeLabel);

	bClock->set(10, 59, 59);
	bClock->print();

	this->setCentralWidget(widget);
	this->show();
}

void QtWidgetsApplication1::handleButton() {

	clock->tick();
	bClock->tick();
	clock->print();
	bClock->print();
}
