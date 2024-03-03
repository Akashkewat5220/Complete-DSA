#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

void Preorder(Node *root)
{
    if(root == NULL)
    return ;

    //Node 
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}

//In order LNR
void Inorder(Node *root)
{
    if(root == NULL)
    return ;

    //Node 
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
    
}

// LRN
void Postorder(Node *root)
{
    if(root == NULL)
    return ;

    //Node 
    Postorder(root->left);
    
    Postorder(root->right);
    cout<<root->data<<" ";
    
}

Node *BinaryTree()
{
    int x;
    cin >> x;
    if (x == -1)
        return NULL;

    Node *temp = new Node(x);
    //left mei data
    cout<<"Enter left child of the "<<x<<" :";
    temp->left = BinaryTree();
    //right mei data
    cout<<"Enter right child of the "<<x<<" :";
    temp->right = BinaryTree();
    return temp;
}

int main()
{
    // Tree creation
    cout<<"Enter the root Node: ";
    Node *root;
    root = BinaryTree();

    //Preorder print
    cout<<"Preoder: ";
    Preorder(root);
    //inordder
    cout<<"\nInorder: ";
    Inorder(root);

    //post order
    cout<<"\n Postorder: ";
    Postorder(root);
}