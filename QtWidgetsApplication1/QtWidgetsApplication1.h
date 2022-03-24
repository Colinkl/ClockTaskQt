#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtWidgetsApplication1.h"
#include <QLabel>
#include "Clock.h"
#include "BorderedClock.h"
#include <QHBoxLayout>
#include <QPushButton>
#include <QRect>
class QtWidgetsApplication1 : public QMainWindow
{
	Q_OBJECT

public:
	QtWidgetsApplication1(QWidget* parent = Q_NULLPTR);


private slots:
	void handleButton();


private:
	Ui::QtWidgetsApplication1Class ui;
	QPushButton* button;
	Clock* clock;
	BorderedClock* bClock;
};
