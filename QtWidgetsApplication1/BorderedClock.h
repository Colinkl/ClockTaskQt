#pragma once
#include "Clock.h"
class BorderedClock :
    public Clock
{
public:
    BorderedClock(QLabel* l):Clock(l) {}
    void print() override;
};

