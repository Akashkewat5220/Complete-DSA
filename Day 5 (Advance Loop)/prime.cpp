#include <iostream>
using namespace std;

int main() {

    int i = 2 , n;
    cout<<"Enter the number: ";
    cin>>n; 

    for(i ; i<n ; i++){
        if(n%i == 0){
            cout<<"Not a prime number";
        }
    }
    cout<<"Prime number";

}