#include <iostream>
using namespace std;

///implement queue using array
class Queue
{
    int *arr;
    int front, rear, size;

public:
    //constructor
    Queue(int n)
    {
        arr = new int[n];
        size = n;
        front = rear = -1;
    }

    //if queue is empty
    bool IsEmpty()
    {
        return front == -1;
    }

    //queue fulll hai
    bool IsFull()
    {
        return rear == size - 1;
    }

    // push element in end
    void push(int x)
    {
        //empty
        if (IsEmpty())
        {
            cout << "pushed " << x << " into queue\n";
            front = rear = 0;
            arr[0] = x;
            return;
        }

        // full hai
        else if (IsFull())
        {
            cout << "Queue Overflow\n";
            return;
        }

        //insert
        else
        {
            rear = rear + 1;
            arr[rear] = x;
        }
    }

    //pop element
    void pop()
    {
        //empty
        if (IsEmpty())
        {
            cout << "Queue Underflow\n";
            return;
        }
        else
        {
            if (front == rear)
            {
                cout << "popped " << arr[front] << " from the queue\n";
                front = rear = -1;
            }
            else
            {
                cout << "popped " << arr[front] << " from the queue\n";
                front = front + 1;
            }
        }
    }

    //start wala elemet
    int start()
    {
        if (IsEmpty())
        {
            cout << "Queue is empty\n";
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
};

int main()
{
    Queue q(8);
    q.push(585);
    q.push(78);
    q.push(5);
    q.pop();
    cout<<q.start()<<endl;
}
