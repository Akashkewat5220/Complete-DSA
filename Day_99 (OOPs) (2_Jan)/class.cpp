#include<iostream>
using namespace std;

class student
{
    private:
    string name;
    int age , roll_number;
    string grade;

    //function
    public:
    void setname(string s)
    {
        if(s.size()==0)
        {
            cout<<"invalid name"<<endl;
            return;
        }
        
    }
    void setage(int a)
    {
        if(a < 0 || a > 100)
        {
            cout<<"invalid age: ";
            return;
        }
    }
    void setroll_number(int r)
    {
        roll_number = r;
    }
    void setgrade(string g)
    {
        grade = g;
    }

    //value printing

    void getname()
    {
        cout<<name<<endl;
    }

    void getage()
    {
        cout<<age<<endl;
    }
    int getroll_number()
    {
        cout<<roll_number<<endl;
    }
    string getgrade(int pin)
    {
        if(pin == 123)
        return grade;

        return " ";

        
    }
};

int main()
{
    // string name;
    // int age , roll_number;
    // string grade;

    // cin>>name>>age>>roll_number>>grade;

    // string name1;
    // int age1 , roll_number1;
    // string grade1;

    // cin>>name1>>age1>>roll_number1>>grade1;

    //ACCESSING THE CLASS

    // student S1;
    // S1.name = "Akash";
    // S1.age = 1;
    // S1.roll_number = 85;
    // S1.grade = "A";

    // cout<<S1.name<<" ";

    // student S2;
    // S2.name = "kush ";
    // S2.age = 1;
    // S2.roll_number = 85;
    // S2.grade = "A";

    // cout<<S2.name<<" ";
    student S1;
    S1.setname("Rohit");
    S1.setage(10);
    S1.setroll_number(21);
    S1.setgrade("A");

    //value print function calling
    S1.getname();
    S1.getage();
    cout<<S1.getroll_number();
    cout<<S1.getgrade(123);
}