#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

// vector<vector<int>>matrix(3 , vector<int>(4 , 1));


//creation
 int n , m ;
cout<<"Enter rows and col: ";

 cin>>n>>m;
vector<vector<int> >matrix(n , vector<int> (m));


for(int i = 0; i < n ; i++)
for(int j = 0 ; j < m ; j++)
cout<<matrix[i][j]<<" ";

    // cout<<" Rows = " <<matrix.size();
    // cout<<" Column = "<<matrix[0].size() ;

for(int i = 0 ; i< n ; i++){
    for(int j = 0; j < m ; j++)
    cout<<matrix[i][j]<<" ";
    cout<<endl;
}





}