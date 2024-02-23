#include <iostream>
using namespace std;

class exception
{
    protected:
    string msg;

    public:

    exception(string msg)
    {
        this->msg = msg;
    }
    void whar()
    {
        // return msg;
    }
};

int main()
{   
    try{
    int *p = new int(10000000000000000000000000000000);
    cout<<"Memory allocation is successfully\n";
    delete []p;
    }
    catch(const int *e)
    {
        // cout<<"Exception Occured due to line 7: "<<e.what()<<endl;
    }
}

//Last Part is confusing  revisise it again