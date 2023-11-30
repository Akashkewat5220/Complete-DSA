#include<iostream>
using namespace std;

int main()
{
//heap address printout
    int *ptr = new int;
    *ptr = 5; //value assign
    cout<<ptr<<endl;

    float *ptr2 = new float;
    *ptr2 = 2.0;
    cout<<ptr2<<endl;

    int n ;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int *p = new int[n];

    //putting value array
    for(int i = 0; i< n ; i++)
    p[i] = i + 1;

    //printing the values from array
    for(int i = 0 ; i < n; i++)
    cout<<p[i]<<endl;

    //Delete keyword use
    delete ptr;
    delete ptr2;
    delete p;

    for(int i = 0 ; i < n; i++)
    cout<<p[i]<<endl;

}