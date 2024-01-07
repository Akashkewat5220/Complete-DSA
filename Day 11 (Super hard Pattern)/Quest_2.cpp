#include <iostream>
using namespace std;

int main(){

int row , col , n; 
cout<<"Enter the value: ";
cin>>n;

for(row = 1 ; row <= n ; row++){
    for(col = 1 ; col<=n-row; col++){
        cout<<"  ";
    }
    //1 to row
    for(col = 1 ; col <= row ; col++){
        cout<<col<<" ";
    }
    //row-1 to 1
    for(col = row - 1; col>= 1; col--){
        cout<<col<<" ";
    }
    cout<<endl;
}

}