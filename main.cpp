#include <iostream>
using namespace std;

int b[6] = {1, 7, 3, 4, 5};
int* bptr = &b[0];

int main()
{

    int a = 23;
    int* aptr;

    //cout << sizeof(b[0])<< endl;
    cout<< *bptr <<endl;

    return 0;
}
