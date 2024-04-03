#include<iostream>
#include<bits/stdc++.h>
using namespace  std ;

int main()
{
    priority_queue<int>p;

    p.push(20);
    p.push(200);
    p.push(50);
    p.push(80);
    p.push(90);

    cout<<p.top()<<" ";

    // delete
    p.pop();
    cout<<p.top()<<" ";

    // size/
    cout<<p.size()<<endl ;

    // while(!p.empty())
    // {
    //     cout<<p.top()<<" ";
    //     p.pop();
    // }
}