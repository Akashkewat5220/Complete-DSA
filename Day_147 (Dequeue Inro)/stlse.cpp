#include<iostream>
#include<deque>
using namespace std;


int main()
{
    deque<int>d;
    d.push_back(10);
    d.push_front(78);
    cout<<d.front()<<endl;
}

//standard library mei sirf commanad dene ka