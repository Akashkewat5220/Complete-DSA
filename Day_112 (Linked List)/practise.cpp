#include <iostream>
using namespace std;

class Node
{
    public:
    int data ;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

int main()
{
    Node *Head;
    Head =new Node(1);

    int arr[] = {2,4,6,8,10};

    cout<<Head->data<<endl;
    cout<<Head->next<<endl;

    //value insertion at beggining

    //linklist not exist
    for(int i = 0 ; i< 5; i++)
    {
        if(Head == NULL)
        {
            Head = new Node(arr[i]);
        }
     
    //exist
        else
        {
            Node *temp;
            temp = new Node(arr[i]);
            temp->next = Head;
            Head = temp;
        }  
    
    }

    // //printing the data
    Node *temp = Head;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    
}