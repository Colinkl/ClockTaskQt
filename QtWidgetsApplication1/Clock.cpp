#include "Clock.h"
#include <QString>

void Clock::print()
{

	label->setFrameStyle(QFrame::NoFrame);
	label->setText(QString("%1 : %2 : %3").arg(this->hh).arg(this->mm).arg(this->ss));
}

void Clock::set(int h, int m, int s)
{
	this->hh = h;
	this->mm = m;
	this->ss = s;
}
