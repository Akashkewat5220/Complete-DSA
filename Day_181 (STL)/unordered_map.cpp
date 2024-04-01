#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

 

int main()
{
    unordered_multimap<int , int>m ;
    m.insert(make_pair(20,30));
    m.insert(make_pair(20,80));
    m.insert(make_pair(60,30));
    m.insert(make_pair(70,390));
    m.insert(make_pair(50,70));
    // m[20] = 70; 
    for(auto it = m.begin() ; it != m.end() ;it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    
}