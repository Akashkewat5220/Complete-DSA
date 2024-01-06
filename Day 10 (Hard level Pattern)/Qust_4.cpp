#include <iostream>
using namespace std;

int main() {

int row , col ; 
int n ;
cout<<"Enter the number: ";
cin>>n;

for(row = 1 ; row<= n ; row++){
    for(col =1; col <= n - row ; col++){
        cout<<"  ";
    }
    for( char col = 'A'; col <='A' + row -1 ; col++){
        cout<<col<<" ";
    }
    cout<<endl;
}





}