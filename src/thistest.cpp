#include "thistest.h"

thistest::thistest(int a)
{
}

int thistest::outthis()
{
    return 5;
}

int thistest::setx(int inx)
{
    x = inx;
    return x;
}

int thistest::xset(int inx)
{
    this->x = inx;


    return x;

}

int thistest::retx()
{
    return x;
}
/*
int thistest &thistest::retaddrx()
{
    return *this;
}
*/
