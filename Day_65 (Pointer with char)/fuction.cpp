#include <iostream>
using namespace std;

// void swapping (int &p1 , int &p2)
// {
//     int temp = p1;
//     p1 = p2;
//     p2 = temp;
//     cout<<p1<<endl;
//     cout<<p2<<endl;
//     // cout<<&p1<<endl;
//     // cout<<&p2<<endl;
// }

// void pass (vector<int> &temp)
// {
//     for (int i = 0; i < 5; i++)
//         temp[i] = 20;
// }

void dob(int p[]) 
{
    for (int i = 0; i < 5; i++)
        p[i] = p[i] * 2;
}

int main() 
{
    // reference variable
    int num = 10;
    int &temp = num ;
    cout<<temp<<endl;
    temp++;
    cout<<num<<endl;
    cout<<&temp<<endl;
    cout<<&num;

    // int first = 10 , second = 20;
    // cout<<&first<<endl;
    // cout<<&second<<endl;
    // swapping(first , second);
    // cout<<first<<" "<<second;
    // int arr[5] = {1,2,3,4,5};
    // dob(arr);
    // for(int i = 0 ; i< 5 ;i++)
    // cout<<p[i]<<" ";
    // vector<int>v(5,0);
    // pass(v);
    // for(int i = 0; i < 5 ; i++)
    // cout<<[i]<<" ";

    return 0;
}