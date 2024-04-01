#include<iostream>
#include<unordered_set>
using namespace std ;

int main(){
    unordered_set<int>s;
    s.insert(10);
    s.insert(80);
    s.insert(10);
    s.insert(50);
    s.insert(50);
    s.insert(170);

    for(auto it = s.begin() ; it != s.end(); it++)
    cout<<*it<<" ";
}