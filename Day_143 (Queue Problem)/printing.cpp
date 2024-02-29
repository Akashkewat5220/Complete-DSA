#include <iostream>
#include <queue>
using namespace std;


int main()
{
    queue<int>q;
    q.push(4);
    q.push(8);
    q.push(6);
    q.push(4);

    int n = q.size();

    while(n--)
    {
        cout<<q.front()<<endl;
        q.push(q.front());
        q.pop();

        cout<<q.size();
    }
}