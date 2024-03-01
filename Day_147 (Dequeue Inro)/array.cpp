#include <iostream>
using namespace std;

class Dequeue
{
    public:
    int front , rear , size;
    int *arr;

    public:
    Dequeue(int n)
    {
        size = n;
        arr = new int[n];
        front = rear = -1;
    }

    bool IsEmpty()
    {
        return front == -1;
    }

    bool IsFull()
    {
        return (rear+1)%size == front;
    }

    void push_front(int x)
    {
        if(IsEmpty())
        {
            front = rear = 0;
            cout<<"Pushed "<<x<<" in the front of Dequeue \n";
            arr[0] = x;
            return ;
        }
        // full hua dequeue
        else if(IsFull())
        {
            cout<<"Dequeue Overflow\n";
            return;
        }
        //normal wala case;
        else{
            front = (front-1 +size)%size;
            arr[front] = x;
            cout<<"Pushed "<<x<<" in front\n";
            return;
        }
    }

    //push back
    void push_back(int x)
    {
        if(IsEmpty())
        {
            front = rear = 0;
            cout<<"Pushed "<<x<<" in the front of Dequeue \n";
            arr[0] = x;
            return ;
        }
        // full hua dequeue
        else if(IsFull())
        {
            cout<<"Dequeue Overflow\n";
            return;
        }
        //normal wala case;
        else{
            rear = (rear+1) % size;
            arr[rear] = x;
            cout<<"Pushed "<<x<<" in back\n";
            return;
        }
    }

    //popping from front;
    void pop_front()
    {
        //empty hia toh
        if(IsEmpty())
        {
            cout<<"Dequeue underflow case\n";
            return;
        }
        else{
            cout<<" popped "<<arr[front]<<"fromt the queue\n";
            //ek hi element ho
            if(front == rear)
            front = rear = -1;
            else
            front = (front + 1)%size;
        }
    }

    //pop back
    void pop_back()
    {
        //empty hia toh
        if(IsEmpty())
        {
            cout<<"Dequeue underflow case\n";
            return;
        }
        else{
            cout<<" popped "<<arr[rear]<<"fromt the queue\n";
            //ek hi element ho
            if(front == rear)
            front = rear = -1;
            else
            rear = (rear-1 +size)%size;
        }
    }

    //starting wala element

    int start()
    {
        if(IsEmpty())
        return -1;
        else 
        return
        arr[front];
    }

    //ending wala element
    int end()
    {
        if(IsEmpty())
        return -1;
        else 
        return
        arr[rear];
    }
};

int main()
{
    Dequeue d(5);
    d.push_back(10);
    d.push_back(165);
    d.push_front(1);
    cout<<d.start()<<endl;
    d.pop_front();
    cout<<d.start()<<endl; 


}