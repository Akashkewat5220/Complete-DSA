#include <iostream>
using namespace std;

int count(string str , int index)
{
    //base case
    if(index == -1)
    return 0;
    // if word is a vowel
    if (str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u')
    return 1 + count(str , index - 1);
    // if not vowel
    else
    return count(str , index- 1);
}

int main()
{
    string str = "Akash";
    cout<<count(str , 4);
}