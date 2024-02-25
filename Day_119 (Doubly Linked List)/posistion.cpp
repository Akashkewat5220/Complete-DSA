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

// int main()
// {
//     //at position
//     int pos = 2;

//     //insert at start
// //     if(pos == 0)
// //     {
// //         //linked list hai
// //         if(head == NULL)
// //         {
// //             head = new Node(5);
// //         }
// //         //linked list nahi hai
// //         else{
// //             Node *temp = new Node(5);
// //             temp->next = head;
// //             head ->prev = temp;
// //             head = temp;
// //         }
// //     else
// //     }
// // }