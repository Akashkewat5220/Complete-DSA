#include<iostream>
using namespace std;

// void print(int n)
// {
//     //base case condition
//     if(n == 0)
//     return;
//     cout<<n<<endl;
//     print(n-1);
// }

//only even print
void print(int n)
{
    //base case condition
    if(n == 2)
    return;
    cout<<n<<endl;
    print(n-2);
}

int main() 
{
    //print n to 1
    // int n = 5;
    // print(5);

    //print only even no.
    int n = 10;

    print(n);
}