#include <iostream>
#include "thistest.h"
using namespace std;

int b[6] = {1, 7, 3, 4, 5};
int* bptr = &b[0];
long* longbptr = (long*) bptr;

uint8_t h[5] = {31, 12, 78, 56};
int *hptr = (int*)(&h);
uint8_t *hp = &h[0];

int8_t k = 33;

thistest bo(8);
thistest* objptr = &bo;
//int* mlptr = (int*) malloc(4 * sizeof(int));
int c = 48;
int* cptr = &c;
//uint8_t* cptr8 = (uint8_t*) cptr;
uint8_t d = 24;
long* dptr = (long*) &d;
char e = '0';
long* eptr = (long*) &e;
int f = 87;
int* faddr = &f;

int ret6()
{
    return 6;
}

int addnum(int a, int b)
{
    return a+b;
}

int* fun()
{
    int* arr = new int[2];
    arr[0] = 7;
    arr[1] = 8;
    //arr[2] = 12;
    //cout<< &arr[1] << endl;
    //arr[2] = 45;
    return arr;
}

int* sumv()
{
    int *inv = new int(5);
    return inv;
}

int main()
{

    //cout<<"\"hello there\""<<endl;
    //cout<< *eptr <<endl;
    /*
    for(int i = 0; i < 5; i++)
    {
        cout<< bytebptr+i <<endl;
    }
    */
    //cout<< bptr <<endl;
    /*
    cout<<cptr<<endl;
    cout<<sizeof(c)<<endl;
    cout<< sizeof(cptr) << endl;
    cout<< dptr << endl;

    *mlptr = 3;
    *(mlptr + 1) = 5;
    *(mlptr + 2) = 8;
    *(mlptr + 3) = 14;

    for(int i = 0; i < 4; i++)
    {
        cout<<*(mlptr + i)<< endl;
    }
    */
    //int (*ret6ptr)() = &ret6;
    //cout<<(*ret6ptr)()<<endl;
    //cout<< bo.xset(12);
    //cout<< bo.retx() << endl;
    //cout<< bo.retaddrx() <<endl;
    //cout << sizeof(b[0])<< endl;
    //cout<< *bptr <<endl;
    //cout<< objptr->outthis() << endl;
    //cout<< &b << "|" <<b<<"|" << &b[0]<<endl;
    //int (*addnum_ptr)(int, int) = &addnum;
    //int result = (*addnum_ptr)(2, 3);
    //cout<< result << endl;
    //int* arr2 = fun();

    //delete[] arr2;

    //cout << (fun())<< endl;
    /*
    delete[] fun();
    cout << *(fun())<< endl;
    */
    //cout << (fun()+1)<< endl;
    //delete[] (fun()+1);
    //cout << (fun()+1)<< endl;

    cout << fun()<< endl;
    cout << (fun()+1)<< endl;
    //cout << *(fun())<< endl;
    //cout << *(fun()+1)<< endl;
    cout << sizeof(fun())<< endl;
    cout << sizeof(fun()+1)<< endl;
    cout << ""<< endl;

    //delete[] (fun()+1);
    cout << fun()<< endl;
    cout << (fun()+1)<< endl;
    //cout << *(fun())<< endl;
    //cout << *(fun()+1)<< endl;
    cout << sizeof(fun())<< endl;
    cout << sizeof(fun()+1)<< endl;

    //cout << *(fun()+2)<< endl;

    //cout<< sizeof(*(fun))<< endl;

    //cout<< *sumv() <<endl;
    //delete (sumv()+20);
    //cout<< *sumv() <<endl;
    //cout<< (sumv()) <<endl;

    return 0;
}
