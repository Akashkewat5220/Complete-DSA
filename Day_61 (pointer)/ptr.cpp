#include <iostream>
using namespace std;

int main()
{
//     int a = 10;
//     cout<<&a<<endl;
//     int *ptr = &a;
//     cout<<sizeof(ptr)<<endl;

//     float b = 12.03;
//     cout<<&b<<endl;

//     float *ptr1 = &b;

//     cout<<sizeof(ptr1)<<endl;

    
    int a = 10 ;
    //addresss ptinting
    int *ptr = &a;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    int b = 90;
    ptr = &b;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    b = 30;
    cout<<*ptr<<endl;
}