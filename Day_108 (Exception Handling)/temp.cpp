#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    try{
    if(b == 0)
    {
        throw"Divide by 0 is not possible\n";
        
    }
    
    int c = a / b;
    cout<<c<<endl;
    }
    catch(const char *e)
    {
        cout<<"Exception is Occured: "<<e <<endl;
    }
    
}