#include<iostream>
using namespace std;



class Customer
{
    
    // public:
    string name;
    int account_number , balance , age;

    public:
    Customer(string name , int account_number , int balance, int age)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance; 
        this->age = age;
    }

    void deposit(int amount)
    {
        if(amount > 0)
        {
            balance+=amount;
        }
        else{
            cout<<"Invalid amount";
        }
    }

    void withdraw(int amount)
    {
        if(amount <= balance && amount > 0 )
        {
            balance-= amount;
        }
    }

    void updateage ( int age)
    {
        if(age > 0 && age < 100)
        this->age = age;
        else{
        cout<<"Invalid age";
    }
    }
    

    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<age<<" "<<endl;
    }


};

    int main()
    {
        Customer A1("Hero" , 1 , 1000, 3);
        Customer A2("Gonjo" , 2 , 2000, 9);
        Customer A3("Mohan" , 3 , 3000 , 7);
        A1.updateage(24);
        A1.display();

        
        // cout<<pow(2,4);
    }


//Abstraction is also present here;
