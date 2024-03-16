#include <iostream>
using namespace std;

bool linearsearch(int arr[] , int index , int X , int N)
{
    // base condition
    if(index == N)
    return 0;

    if(arr[index] == X)
    return 1;
    linearsearch(arr , index +1  , X ,N);
}

int main() 
{
    int arr[] = {1,2,35,6};
    int X = 1;
    cout<<linearsearch(arr , 0 , X , 4)<<endl; 
}