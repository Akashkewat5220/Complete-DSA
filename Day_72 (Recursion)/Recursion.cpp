#include <iostream>
using namespace std;

void fun3(int n)
{
    if(n==0)
    {
        cout<<"Happy Birthday\n";
        return;
    }
    cout<<n<<" Days left for Birthday"<<endl;
    fun3(n-1);
}

// void fun2(int n)
// {
//     cout<<n<<" Days left for Birthday"<<endl;
// }

// void fun1(int n)
// {
//     cout<<n<<" Days left for Birthday"<<endl;
// }

// void fun0(int n)
// {
//     cout<<" Happy Birthday"<<endl;
// }

int main() 
{
    int n = 5 ;

    // Iterative Approach
    // for(int i = n ; i > 0 ; i--)
    // {
    //     cout<<i<<" Days left for Birthday"<<endl;
    // }

    // cout<<"Happy Birthday";

    // Function calling

    
    fun3(3);
    // fun2(2);
    // fun1(1);
    // fun0(0);
}