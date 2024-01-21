#include <iostream>
using namespace std;

void printcol(int arr[][4] , int row , int col)
{
    for(int i = 0 ; i < col ; i++)
    for(int j = 0 ; j < row ; j++)
    cout<<arr[i][j]<<" ";
}

int main() {

    int x = 27;
    //create 2d array
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    //print value of the arrays row wise
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0  ; j < 4 ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }

    //search an element
    for(int i = 0 ; i< 3; i++)
    for(int j = 0 ; j < 4 ; j++){
        if(arr[i][j] == x )
        {
            cout<<"yes ";
            return 0;
        }

    }
    cout<<"No";

    

    //function call
    printcol(arr , 3 , 4);
}