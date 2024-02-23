#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

int main()
{
    Node *Head, *Tail;
     Tail = Head = NULL;

    int arr[] = {2,4,6,8,10};

    //Inserting at the end
    for(int i = 0 ; i < 5 ; i++)
    {
        //linked list is empty
        if(Head == NULL)
        {
            Head = new Node(arr[i]);
        }

        //if not empty
        else
        {
            Tail->next = new Node(arr[i]);
            Tail = Tail->next;
        }
    }
    Node *temp;
    temp = Head;

    //printing
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}