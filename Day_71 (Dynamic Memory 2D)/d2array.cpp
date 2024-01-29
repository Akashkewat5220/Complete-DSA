#include <iostream>
using namespace std;

int main()
{
    //Array creation which stores address
    // int n , m; // n = rows , m = cols
    // cin>>n>>m;

    // int **ptr = new int *[n];

    // // 2D Array Creation
    // for(int i = 0; i< n ;i++)
    // {
    //     ptr[i] = new int [m];
    // }

    // for(int i = 0 ; i< n ;i++)
    // {
    //     for(int j = 0 ; j < m ; j++)
    //     cin>>ptr[i][j];
    // }
    


    // //Value printing in 2D
    // for(int i = 0 ; i< n ;i++)
    // {
    //     for(int j = 0 ; j < m ;j++)
    //     cout<<ptr[i][j]<<" ";
    //     cout<<endl;
    // }
    

    // //Release the memory , from heap
    // for(int i = 0 ; i < n ; i++)
    // {
    //     delete[] ptr[i];
    //     delete ptr;
    // }

    int L , B , H;

    cin>>L>>B>>H;

    int ***ptr = new int **[L];

    //create 2D array

    for(int i = 0; i< L ; i++)
    {
        ptr[i] = new int *[B];

        for(int j = 0 ; j < B ;j++)
        {
            ptr[i][j] = new int[H];
        }
    }

    // value filing

    for(int i = 0 ; i< L ; i++)
    for(int j = 0 ; j < B; j++)
    for(int k = 0 ; k < H ; k++)
    ptr[i][j][k] = i + j + k;
    
    
    //vlaue printing 
    for(int i = 0 ; i< L ; i++)
    for(int j = 0 ; j < B; j++)
    for(int k = 0 ; k < H ; k++)
    cout<<ptr[i][j][k]<<" ";
    
    
}
