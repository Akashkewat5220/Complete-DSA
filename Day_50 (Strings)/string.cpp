#include <iostream>
using namespace std;

int main() {
    // string s ;
    // getline(cin , s);
    // cout<<s;
    // cout<<s.size();

    // string s1 = "rihit";
    // string s2 = "mohit";

    // string s3 = s1 + s2;
    // cout<<s3<<endl;
    // s1.push_back('p');
    // cout<<s1;

    // string s = "rohit is a \"good\" boy";
    // cout<<s;

    string s = "rohit";
    //reverse

    int start = 0 , end = s.size()-1;

    while(start < end)
    {
        swap(s[start] , s[end]);
        start++ , end--;
    }
    cout<<s;

    //size
    int size = 0;
    while(s[size] != '\0')
    {
        size++;
    }
    cout<<endl;
    cout<<size<<" ";

    string s2 = "naman";
    start = 0 , end = s2.size()-1;

    while(start < end)
    {
        if(s2[start] != s2[end])
        {
            cout<<"Not a Palindrome";
            return 0;
        }
        start++ , end--;
    }
    cout<<"palindrome";
}