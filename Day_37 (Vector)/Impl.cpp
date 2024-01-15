#include <iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int>v;
    // vector<int>v1(5 , 1);

    // cout<<"Size of v:"<<v.size()<<endl;
    // cout<<"Capacity of v:"<<v.capacity()<<endl;
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(10);
    // cout<<"Size of v: "<<v.size()<<endl;
    // cout<<"Capacity of v: "<<v.capacity()<<endl;

    //update value
    // v[1] = 5;
    // cout<<"Size of v: "<<v1.size()<<endl;
    // cout<<"Capacity of v: "<<v1.capacity()<<endl;
    // v1.push_back(6);
    // cout<<"Size of v: "<<v1.size()<<endl;
    // cout<<"Capacity of v: "<<v1.capacity()<<endl;

    //delte value from a vector
    // vector<int>vnew;
    // vnew.push_back(4);
    // vnew.push_back(41);
    // vnew.push_back(42);
    // vnew.push_back(84);
    // vnew.pop_back();
    // cout<<"Size of v: "<<vnew.size()<<endl;
    // cout<<"Capacity of v: "<<vnew.capacity()<<endl;

    // vnew.erase(vnew.begin()+1);
    // cout<<"Size of v: "<<vnew.size()<<endl;
    // cout<<"Capacity of v: "<<vnew.capacity()<<endl;

    // for(int i = 0 ; i<vnew.size() ; i++)
    // cout<<vnew[i]<<" ";

    // vnew.insert(vnew.begin() + 1 , 50);
    // cout<<endl;
    // for(int i = 0 ; i<vnew.size() ; i++)
    // cout<<vnew[i]<<" ";

    // vnew[1] = 37;
    // for(int i = 0 ; i<vnew.size() ; i++)
    // cout<<vnew[i]<<" ";

    // vnew.clear();
    //  for(int i = 0 ; i<vnew.size() ; i++)
    // cout<<vnew[i]<<" ";
    // cout<<"Size of v: "<<vnew.size()<<endl;
    // cout<<"Capacity of v: "<<vnew.capacity()<<endl;

    // vector<int>arr;
    // arr.push_back(2);
    // arr.push_back(21);
    // arr.push_back(24);
    // arr.push_back(25);
    // cout<<arr[0]<<endl;
    // cout<<arr.front()<<endl;
    // cout<<arr[arr.size() - 1]<<endl;
    // cout<<arr.back()<<endl;

    //copy value of 1 vector to another

    // vector<int>a;

    // a= arr;
    // cout<<a.size();
    // cout<<endl;
    // for(auto it = arr.begin(); it!= arr.end() ; it++)
    // {
    //     cout<<*it<<" " ; 
    // }
    // cout<<endl;
    // for(auto i : arr)
    // cout<<i<<" ";

    vector<int>ans;
    ans.push_back(5);
    ans.push_back(58);
    ans.push_back(54);
    ans.push_back(52);
    ans.push_back(59);

    //in decreading
    sort(ans.begin() , ans.end());
    for(int i = 0 ; i<ans.size() ; i++)
    cout<<ans[i]<<" ";
    cout<<endl;



}