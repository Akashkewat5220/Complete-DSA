#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    int sum = INT_MIN ;
    int index = -1;
    
    for(int i = 0 ; i < 3 ; i++) {
        int total = 0; 
        for(int j = 0 ; j < 4 ; j++) {
            total += arr1[i][j];
        }
        if(sum < total){
            sum = total;
            index = i;
        }
    }
    
    cout << "The row with the highest sum is row " << index << " with a sum of " << sum << endl;

    return 0;
}
