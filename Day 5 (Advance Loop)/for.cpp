#include <iostream>
using namespace std;

int main() {
    // for(int i = 95 ; i<=200 ; i++)
    //     cout<<i<<" ";

    // char name;
    // for(name = 'a' ; name <='z' ; name++)
    // cout<<name<<" ";

    // int n; 
    // cout<<"Enter the number : ";
    // cin>>n;
    // for(int i = n ; i >=1 ; i--)
    // cout<<i<<" ";

    // int i ;
    // for(i  = 1 ; i<= 100 ; i= i+3)
    // cout<<i<<" ";

    // int n,i;
    // cout<<"Enter the table :";
    // cin>>n;
    // for(i = 1 ; i<=10 ; i++){
    //     cout<<n<<"*"<<i<<"="<<n*i<<endl;
    // }

    // int n , i , num , pow;
    // cout<<"Enter the number: ";
    // cin>>n;
    // cout<<"Enter the power: ";
    // cin>>pow;
    
    // num = n;
    // for(i = 1 ; i<pow ; i = i+1){
    //     num = num*n;
    // }
    // cout<<num;

    // int n, i , sum = 0;
    // cout<<"Enter the number :" ;
    // cin>>n;
    
    // for(i = 1 ; i <= n ; i++){
    //     sum = sum + i; 
    // }
    // cout<<sum<<endl;

    int i , fact = 1 , n ;
    cout<<"Enter the number :" ;
    cin>>n;
    for(i = 1; i<=n ; i++){
        fact = fact * i;
    }
    cout<<fact<<endl;


}