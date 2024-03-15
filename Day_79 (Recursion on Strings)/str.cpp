#include <iostream>
using namespace std;

bool checkpal(string str , int start , int end)
{
    if(start >= end)
    {
        return 1;
    }

    // not matched 
    if(str[start] != str[end])
    return 0;
    
    // matched words
    return checkpal(str , start + 1 , end - 1);

}

int main() 
{
    string str = "naman";
    cout<<checkpal(str , 0 , 4)<<endl;
}