#pragma once
using namespace std;


class IClock
{
public:
    int hh = 0;
    int mm = 0;
    int ss = 0;

    virtual void print() = 0;
    virtual void set(int h, int m, int s) = 0;

    void tick();

};

