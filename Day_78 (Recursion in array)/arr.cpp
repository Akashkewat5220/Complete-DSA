#include <iostream>
using namespace std;

void print (int arr[] , int index , int n)
{
    if(index == 5)
    return ;

    cout<<arr[index]<<" ";
    print(arr , index + 1 , n);
}

int main() 
{
    int arr [] = {3,4,1,2,8};
    print(arr , 0 , 5) ;
}