#include <iostream>
using namespace std;

int main() {

int row , col , n ;
cout<<"Enter the value of n :";
cin>>n;

for(row = 1 ; row <= n ; row++){
    for(col = 1; col <= n-row ; col++){
        cout<<"  ";
    }
    for(col = 1; col <= row ; col++){
        cout<<"*   ";
    }
    cout<<endl;
}

for(row = n ; row >= 1 ; row--){
    for(col = 1; col <= n-row ; col++){
        cout<<"  ";
    }
    for(col = 1; col <= row ; col++){
        cout<<"*   ";
    }
    cout<<endl;
}

}