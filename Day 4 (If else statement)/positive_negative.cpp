#include <iostream>
using namespace std;

int main()  {
    int number;
    cin>>number;

    if(number > 0){
        cout<<"Positive";
    } else if (number == 0){
        cout<<"Zero";
    } else {
        cout<<"Negatve";
    }
}