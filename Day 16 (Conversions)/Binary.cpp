#include <iostream>
using namespace std;

int main(){

int num ;
cout<<"Enter the number: ";
cin>>num;

int ans = 0 , rem , mul = 1;

while(num>0){

//remainder
rem = num%2 ;
// Quotient
num/=2;
//ans
ans = rem*mul + ans;
// mul
mul *= 10;
}
cout<<ans<<endl;
}