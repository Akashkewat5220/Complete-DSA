#include <iostream>
using namespace std;

int main() {

int row , col ; 
// int n ;
// cout<<"Enter the number: ";
// cin>>n;

for(row = 1 ; row<= 5 ; row++){
    for(col =1; col <= 5 - row ; col++){
        cout<<"  ";
    }
    for( col = row; col >= 1 ; col--){
        cout<<col<<" ";
    }
    cout<<endl;
}





}