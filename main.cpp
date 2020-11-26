#include <iostream>
#include "thistest.h"
using namespace std;

int b[6] = {1, 7, 3, 4, 5};
int* bptr = &b[0];

thistest bo(2);

int* mlptr = (int*) malloc(4 * sizeof(int));

int ret6()
{
    return 6;
}

int main()
{
    *mlptr = 3;
    *(mlptr + 1) = 5;
    *(mlptr + 2) = 8;
    *(mlptr + 3) = 14;

    for(int i = 0; i < 4; i++)
    {
        cout<<*(mlptr + i)<< endl;
    }
    //int (*ret6ptr)() = &ret6;
    //cout<<*ret6ptr<<endl;
    //cout<< bo.xset(12);
    //cout<< bo.retx() << endl;
    //cout<< bo.retaddrx() <<endl;
    //cout << sizeof(b[0])<< endl;
    //cout<< *bptr <<endl;

    return 0;
}
