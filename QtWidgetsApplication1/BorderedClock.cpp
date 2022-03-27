#include "BorderedClock.h"

void BorderedClock::print()
{
	label->setFrameStyle(QFrame::Panel | QFrame::Plain);
	label->setText(QString("%1 : %2 : %3").arg(this->hh).arg(this->mm).arg(this->ss));
}
