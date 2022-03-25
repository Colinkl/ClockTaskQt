#pragma once
#include "IClock.h"
#include <Qlabel>
class Clock :
    public IClock
{
public:
    Clock(QLabel* l) : label(l) {}
    QLabel* label;
    void print() override;
    void set(int hh, int mm, int ss) override;
};

