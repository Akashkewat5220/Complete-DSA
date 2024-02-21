#include<iostream>
using namespace std;

class Human
{
    private:
    int a ;
    protected:
    int b;
    public:
    int c;

    void fun()
    {
        a = 10 ;
        b = 9 ;
        c = 8;
    }
};

int main()
{
    Human Akash;
    Akash.c = 10;

}