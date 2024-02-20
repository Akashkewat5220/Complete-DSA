#include <iostream>
using namespace std;

class Customer
{
    string name;
    int account_number;
    int balance;

    public:
    //default constructor
    Customer()
    {   
        //value initialisation
        name = "Akash";
        account_number = 123;
        balance = 100;

    }

    //Parameterised constructor
    Customer(string name , int account_number , int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }

    // Constructor overloading
    Customer(string a , int b)
    {
        name = a;
        account_number = b;
    }

    //inline constructor
    inline Customer(string a , int b , int c): name(a)  , account_number(b) , balance(c){

    }

    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }

    //cooppy constructor
    Customer(Customer &B)
    {
        name = B.name;
        account_number = B.account_number;
        balance = B.balance;
    }
};

int main()
{
    Customer A1;
    Customer A2("Akash" , 23 , 34535);
    Customer A3("Mohit" , 23);
    A1.display();
    A2.display();
    A3.display();
    // Customer A4(A3);
    // A4.display();
}