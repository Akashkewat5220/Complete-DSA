#include <iostream>
using namespace std;

class stack
{
    int *arr;
    int size;
    int top;

public:

bool flag;
    // contructor
    stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
        flag = 1;
    }


// operations implementations

// push operration
void push(int value)
{
    if (top == size - 1)
    {
        cout << "StackOverflow\n";
        return;
    }
    else
    {
        top++;
        arr[top] = value;
        cout << "Pushed " << value << " into the stack \n";
        flag = 0;
    }
}

// pop ioeration
void pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow \n";
    }
    else
    {
        cout << "Popped " << arr[top] << " from the stack \n";
        top--;
        if(top == -1)
        flag = 0;
    }
}

// peek nikalna
int peek()
{
    if (top == -1)
    {
        cout << "Stack Underflow \n";
        return -1;
    }
    else
    {
        return arr[top];
    }
}

/// Is Empty;
bool IsEmpty()

{
    return top == -1;
}

int IsSize()
{
    top + 1;
}
};

    int main()
    {
        // stack s(4);
        // s.push(5);
        // s.push(6);
        // s.push(7);
        

        // s.pop();
        // s.pop();
        // s.pop();
        // s.pop();
        // s.pop();

        //peek element
        // cout<<s.IsEmpty()<<endl;
        
        //negative elements;
        stack s(5);

        int value = s.peek();
        if(s.flag == 0)
        cout<<value<<endl;
    }
