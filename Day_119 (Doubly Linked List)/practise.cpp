#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int value)
    {
        data = value;
        next = prev = NULL;
    }
};

Node *CreateDLL(int arr[] , int index , int size , Node *back)
{
    if(index == size)
    return NULL;

    /// node creation
    Node *temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = CreateDLL(arr , index + 1 , size , temp);
    return temp;
}

int main()
{
    Node *head = NULL, *tail = NULL;

    // Create a Doubly linked list
    int arr[] = {1, 2, 3, 4, 5};

    head = CreateDLL(arr , 0 , 5 , NULL);

    // AT END
    // for (int i = 0; i < 5; i++)
    // {
    //     //linkded list doesn't exists
    //     if(head == NULL)
    //     {
    //         head = new Node(arr[i]);
    //         tail = head;
    //     }

    //     //exist karti hai linked list
    //     else{
    //         Node *temp = new Node(arr[i]);
    //         tail->next = temp;
    //         temp->prev = tail;
    //         tail =  temp;
    //     }
    // }

    // value printing
    Node *trav = head ;
    while(trav != NULL)
    {
        cout<<trav->data<<" ";
        trav = trav->next;
    }
}

// INSERTION AT STARTING
// int main()
// {
//     Node *head = NULL;

//     //inset at start

//     //linked list not exist
//     if(head == NULL)
//     {
//         head = new Node(5);
//     }
//     //already exist
//     else{
//         Node *temp = new Node(5);
//         temp-> next = head;
//         head ->prev = temp;
//         head = temp;
//     }

//     // value printing
//     Node *trav = head ;
//     while(trav != NULL)
//     {
//         cout<<trav->data<<" ";
//         trav = trav->next;
//     }
// }