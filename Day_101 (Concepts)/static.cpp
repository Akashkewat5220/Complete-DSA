#include <iostream>
using namespace std;

class Customer
{
    string name;
    int account_number, balance;
    static int total_balance;
    static int total_customer;
    

public:


    Customer(string name, int account_number, int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        total_customer++;
        total_balance+= balance;
    }

    

    //static member function , can directly access private part of the class
    static void accesStatic()
    {
        cout<<"Totla number of Customer "<<total_customer<<endl;
        cout<<"Total balance:"<<total_balance<<endl;
    }

    void deposit(int amount)
    {
        if(amount >0)
        {
            balance+=amount; //customer balance
            total_balance += amount;
        }
    }

    void withdraw(int amount)
    {
        if(amount <= balance && amount>0)
        {
            balance -= amount;
            total_balance -= amount;

        }
    }

    void display()
    {
        cout << name << " " << account_number << " " << balance << " " << total_customer << endl;
    }

    void display_total() 
    {
        cout<< total_customer << endl;
    }
};

int Customer::total_customer = 0; //initialing
int Customer::total_balance = 0;

int main()
{
    Customer A1("Akash", 1, 1000);
    Customer A2("Rohit", 2, 4000);
    Customer A3("shuru", 3, 9000);
    // A1.display();
    // A2.display();
    // A3.display();
    // A2.dispaly_total();
    // Customer::total_customer = 5;
    A1.deposit(800);
    A2.withdraw(200);
    Customer::accesStatic();
}