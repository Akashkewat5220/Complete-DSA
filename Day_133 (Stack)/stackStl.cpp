#include<iostream>
#include<stack>
using namespace std;


int main()
{
    stack<int>S;
    S.push(6);
    S.push(62);
    S.push(64);

    cout<<S.size()<<endl;
    cout<<S.top()<<endl;
    S.pop();
    cout<<S.size()<<endl;
    cout<<S.empty()<<endl;


} 