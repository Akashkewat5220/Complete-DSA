#include <iostream>
using namespace std;

bool Binarysearch(int arr[] , int start , int end , int X)
{
    //base case condition
    if(start > end)
    return 0;

    int mid = start + (end-start)/2;
    if(arr[mid] == X)
    return 1;
    else if(arr[mid] < X)
    return Binarysearch(arr , mid + 1 , end , X);
    else
    return Binarysearch(arr , start , mid - 1 , X);
}

int main()
{
    int arr[] = {2,3,6,8};
    int X = 6;
    cout<<Binarysearch(arr , 0 , 5 , X);
}