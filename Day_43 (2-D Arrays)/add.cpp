#include <iostream>
using namespace std;

int main(){
    int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
    int ans[3][4];

    //add

    for(int row = 0 ; row<3; row++)
    for(int col = 0 ; col < 4 ; col++)
    {
        ans[row][col] = arr1[row][col] - arr2[row][col];
    } 

    //print value of ans
    for(int i = 0 ; i < 3 ;i++)
    for(int j = 0 ; j < 4 ; j++)
    {
        cout<<ans[i][j]<<" ";
    }
}