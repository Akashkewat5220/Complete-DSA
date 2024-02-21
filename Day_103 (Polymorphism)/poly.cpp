#include <iostream>
using namespace std;

class Area
{
    public:

    int calculateArea(int r) ///one para
    {
        return 3.14*r*r;
    }

    int calculateArea(int l , int b) //rec area two para
    {
        return l*b;
    }
};

int main()
{
    Area A1 , A2;
    cout<<A1.calculateArea(4)<<endl; //decided in compile time;
    cout<<A2.calculateArea(2 , 5)<<endl;
    // cout<<A2.calculateArea("Rohit"); //not allowed
}

//we cannot write same function two times