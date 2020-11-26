#ifndef THISTEST_H
#define THISTEST_H

class thistest
{
    private:
        int x;
    public:
        thistest(int);
        int outthis();
        int setx(int inx);

        int xset(int inx);
        int retx();
        //int &retaddrx();
};

#endif // THISTEST_H
