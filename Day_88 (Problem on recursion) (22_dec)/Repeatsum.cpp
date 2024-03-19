#include <iostream>
using namespace std;

int subsum(int arr[] , int index , int n , int sum)
{
    //condition
    if(sum == 0 )
    return 1 ;

    if(index == n || sum < 0)
    return 0;

    return subsum(arr , index+1 , n , sum)+ subsum(arr , index , n , sum - arr[index]);
}

int main()
{
    int arr[] = {5,6,2};
    int sum = 6;
    cout<<subsum(arr , 0 , 3 , sum)<<endl;
}