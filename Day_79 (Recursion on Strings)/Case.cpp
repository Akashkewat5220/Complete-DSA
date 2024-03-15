#include <iostream>
using namespace std;

void LowertoUpper(string &str , int index )
{
    /// base case
    if(index == -1)
    return ;

    str[index] = 'A' + str[index] - 'a';
    LowertoUpper(str , index-1);
}

int main(){
    string str = "akash";
    LowertoUpper(str , 4);
    cout<<str<<endl;
}