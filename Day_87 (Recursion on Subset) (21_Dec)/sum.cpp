#include <iostream>
using namespace std;

void print(int arr[] , int index , int n , int sum)
{
    if(index == n)
    {
        cout<<sum<<endl;
        return;
    }

    //Ya toh value include karega ya toh nahi karega
    //not inlcuded
    print(arr, index+1 , n , sum);
    //included
    print(arr , index+1 , n , sum+arr[index]);
}

int main()
{
    int arr[] = {2,3,5,4};
    print(arr , 0 , 4 , 0);
}