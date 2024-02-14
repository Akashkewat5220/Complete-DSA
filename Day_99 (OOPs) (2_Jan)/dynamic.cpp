#include<iostream>
using namespace std;

class Student
{
    public:
    string name ;
    int age , roll_number;
    string grade;
};

int main()
{
    Student *S = new Student;
    (*S).name = "Ronan";
    (*S).age = 21;
    (*S).roll_number  = 51;
    (*S).grade = "B";

    cout<<S->name<<" ";
    cout<<S->age<<" ";
    cout<<S->roll_number<<" ";
    cout<<S->grade<<" ";
} 