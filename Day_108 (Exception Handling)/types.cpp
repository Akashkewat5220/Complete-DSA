#include <iostream>
using namespace std;

class Customer
{
    string name;
    int balance , account_number;

    public:

    Customer (string name , int balance , int account_number)
    {
        this->name = name;
        this->balance  = balance ;
        this->account_number = account_number;
    };

    //deposit
    void deposit (int amount)
    {
        if(amount > 0)
        {
            cout<<amount<<" is credited succesfully\n"; 
        }
    }

    //withdraw

    void withdraw (int amount)
    {
        if(amount >0 && amount <= balance)
        {
            balance -= amount;
            cout<<amount<<" is debited successfully\n";
        }
        else if(amount < 0)
        {
            throw "amount should be greater than 0\n";
        }
        else{
            throw"Your balance is low";
            //throw terminates all below code;
        }
    }
};

int main()
{
    Customer C1("Akash" , 500 , 10);
    try{
    C1.deposit(100);  
    C1.withdraw(6000)  ;
    C1.deposit(100);
    }catch(const char *e)
    {
        cout<<"Exception Occured: "<<e<<endl;
    }
}