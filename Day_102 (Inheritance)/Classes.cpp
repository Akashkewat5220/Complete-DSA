#include <iostream>
using namespace std;

class Human
{
    public:
    string name;
    int age , weight;
};

class Student: public Human{
    private:
    int roll_number , fees;
    
    protected:
    string name;
    int age , wieght;

    public:

    Student(string name , int age , int weight , int roll_number , int fees)
    {
        this->name = name ;
        this->age = age;
        this->weight = weight;
        this->roll_number = roll_number;
        this->fees = fees;
    }

    void display()
    {
        cout<<name<<" age "<<age<<" weight "<<weight<<" roll_number "<<roll_number<<" fees "<<fees;
    }
};

int main()
{
    Student A("Akash" , 54 , 345 , 78 ,5999);
    A.display();
    
}