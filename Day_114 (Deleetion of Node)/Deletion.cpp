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

Node *CreateLinkedList(int arr[] , int index , int size)
{
    if(index == size)
    return NULL;

    Node* temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr , index+1 , size);
    return temp;

}

int main()
{
    Node *Head;
    Head = NULL;
    int arr[] = {2,4,6,1,7};

    Head = CreateLinkedList(arr , 0 ,5);

    //Delete a node at start(2)

    // if(Head!= NULL)
    // {
    //     Node *temp = Head;
    //     Head = Head->next;
    //     delete temp;
    // }

    //Deletre a node at the end

    if(Head != NULL)
    {
        //Only one node is present
        if(Head->next == NULL)
        {
            Node  *temp = Head;
            delete temp;
            Head = NULL;
        }
    //More than  node is present
        else {
            Node *curr = Head;
            Node *prev = NULL;

            //curr->next is not nuLL

            while(curr->next != NULL)
            {
                prev  = curr;
                curr = curr->next;
            }

            prev->next = curr->next;
            delete curr;
        }
    }


    while(Head)
    {
        cout<<Head->data<<" ";
        Head = Head->next;
    }
}