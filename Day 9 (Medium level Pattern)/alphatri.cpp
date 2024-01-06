#include <iostream>
using namespace std;

int main(){

int i , j ;

// for(i = 1; i<=5 ; i++){
//     char name = 'a'+(i - 1); 
//     for(j = 1; j<=5-(i-1) ; j++){
//         cout<<'*'<<" ";
//     }
//     cout<<endl;
// }


// for(i = 5; i>=1 ; i--){
//     char name = 'a'+(i - 1); 
//     for(j = 1; j<=i ; j++){
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }

for(i = 1; i<=5 ; i++){
    char name = 'a'+(i - 1); 
    for(j = 5; j>=5-(i+1) ; j--){
        cout<<j<<" ";
    }
    cout<<endl;
}

}