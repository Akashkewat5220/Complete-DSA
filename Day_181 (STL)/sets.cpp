#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Person{
        public:
        int age ;
        string name ;

        bool operator<(const Person &other) const{
            return age <other.age ;
        }
    };

int main()
{
    // set<int , greater<int>>s;


    // s.insert(20);
    // s.insert(205);
    // s.insert(209);
    // s.insert(207);
    // s.insert(2);
    // s.insert(20);


    



    // s.erase(20);
    // cout<<s.count(20);

    // if(s.count(2))
    // {
    //     cout<<"Yes";
    // }
    // else{
    //     cout<<"no";
    // }

    // finding element
    // if(s.find(2) != s.end())
    // {
    //     cout<<"Present";
    // }
    // else{
    //     cout<<"Absent";
    // }

    // for(auto it = s.begin() ; it != s.end() ; it++)
    // {
    //     cout<<*it<<" ";
    // }

    

    

    set<Person>s;
    Person p1 , p2 , p3 ;
    p1.age = 10 , p1.name = "alas";
    p2.age = 20 , p2.name = "Hanma";
    p3.age = 30 , p3.name = "Baki";

    s.insert(p1);
    s.insert(p2);
    s.insert(p3);

    for(auto it = s.begin() ; it != s.end(); it++)
    {
        cout<<(*it).age<<" "<<(it->name)<<endl;
    }
}