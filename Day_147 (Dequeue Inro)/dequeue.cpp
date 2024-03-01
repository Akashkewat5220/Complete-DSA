#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next, *prev;

    Node(int value)
    {
        data = value;
        next = prev = NULL;
    }
};

class Dequeue
{
    Node *front, *rear;

public:
    Dequeue()
    {
        front = rear = NULL;
    }

    // push front
    void push_front(int x)
    {
        // empty
        if (front == NULL)
        {
            front = rear = new Node(x);
            cout << "Pushed " << x << " in front of dequeue\n";
            return;
        }
        else
        {
            Node *temp = new Node(x);
            temp->next = front;
            front->prev = temp;
            front = temp;
            cout << "Pushed " << x << " in front of dequeue\n";
            return;
        }
    }

    // push_back
    void push_back(int x)
    {
        // empty
        if (front == NULL)
        {
            front = rear = new Node(x);
            cout << "Pushed " << x << " in back of dequeue\n";
            return;
        }
        else
        {
            Node *temp = new Node(x);
            temp->prev = rear;
            rear->next = temp;
            rear = temp;
            cout << "Pushed " << x << " in back of dequeue\n";
            return;
        }
    }

    // pop front;
    void pop_front()
    {
        if (front == NULL)
        {
            cout << "dequeue underflow";
            return;
        }
        else
        {
            Node *temp = front;
            cout << "Popped " << temp->data << " from front of the dequeue";
            front = front->next;
            delete front;

            // more node s are prsent
            if (front)
                front->prev = NULL;
            else
                rear = NULL;
        }
    }

    // pop_back
    void pop_back()
    {
        if (front == NULL)
        {
            cout << "dequeue underflow";
            return;
        }
        else
        {
            Node *temp = rear;
            cout << "Popped " << temp->data << " from front of the dequeue";
            rear = rear->prev;
            delete temp;

            // more node s are prsent
            if (rear)
                rear->next = NULL;
            else
                front = NULL;
        }
    }

    // start
    int start()
    {
        if (front == NULL)
            return -1;
        else
            return front->data;
    }

    // end;
    int end()
    {
        if (front == NULL)
            return -1;

        else
        {
            return rear->data;
        }
    }
};

int main()
{
    Dequeue d;
    d.push_back(5);
    d.push_front(9);
    cout<<d.start()<<endl;
    cout<<d.end()<<endl;
    d.pop_back();
}