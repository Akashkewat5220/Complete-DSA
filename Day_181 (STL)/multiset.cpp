#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {
    multiset<int>s ;
    s.insert(10) ;
    s.insert(20) ;
    s.insert(10) ;
    s.insert(40) ;
    s.erase(10) ;

    for(auto it = s.begin(); it!= s.end() ; it++)
    cout<<*it<<" ";
}

//multiset mei duplicate ho sakte hai