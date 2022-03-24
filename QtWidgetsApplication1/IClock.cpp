#include "IClock.h"

void IClock::tick()
{
	ss++;
	if (ss < 60)
		return;

	ss = 0;
	mm++;
	if (mm < 60)
		return;

	mm = 0;
	hh++;
	if (hh > 24)
		hh = 0;

}

