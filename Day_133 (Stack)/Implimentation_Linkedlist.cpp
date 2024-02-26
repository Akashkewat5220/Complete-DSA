#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node (int value)
    {
        data = value;
        next = NULL;
    }
};

class Stack
{
    Node *top;
    int size;

    public:

    Stack()
    {
        top = NULL ;
        size  = 0;
    }

    //push
    void push(int value)
    {
        Node *temp = new Node(value);
        if(temp == NULL)
        {
            cout<<"Stack Overflow\n";
            return;
        }
        temp->next = top;
        top = temp;
        size++;
        cout<<"Pushed "<<value<<" into the stack \n";
    }

    //pop

    void pop()
    {
        if(top == NULL)
        {
            cout<<"Stack Underflow\n";
            return ;
        }
        else
        {
            Node *temp = top;
            cout<<"Popped "<<top->data<<" from the stack\n";
            top = top->next;
            delete temp;
            size--;
        }
    }

    //peek
    int peek()
    {
        if(top == NULL)
        {
            cout<<"Stack is Empty\n";
            return -1;
        }
        else 
        {
            return top->data;
        }
    }

    //Is Empty()
    bool IsEmpty()
    {
        return top == NULL;
    }

    //Is size;
    int IsSize()
    {
        return size;
    }
};

int main()
{
    Stack S;
    S.push(6);
    S.push(6);
    S.push(6);
    S.push(6);
    cout<<S.IsEmpty()<<endl;
    S.pop();
    cout<<S.IsSize();
}