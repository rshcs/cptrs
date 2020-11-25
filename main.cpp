#include <iostream>
#include "thistest.h"
using namespace std;

int b[6] = {1, 7, 3, 4, 5};
int* bptr = &b[0];

thistest bo(2);

int main()
{
    bo.xset(12);
    cout<< bo.retx() << endl;
    //cout<< bo.retaddrx() <<endl;
    //cout << sizeof(b[0])<< endl;
    //cout<< *bptr <<endl;

    return 0;
}
