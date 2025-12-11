#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node *insert(Node* &root, int data)
{
    Node *newNode = new Node(data);
    if(root == NULL)
    {
        root = newNode;
        return newNode;
    }
    if(data < root->data)
    {
        return insert(root->left, data);
    }
    else
    {
        return insert(root->right, data);
    }
}

void inOrder(Node *root)
{
    if(root != NULL)
    {
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}

void deleteNode(Node* &root, int data)
{
    
}
int main()
{
    Node *root = nullptr;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        int data;
        cin>>data;
        insert(root, data);
    }
    cout<<"Before deletion (InOrder) : ";
    inOrder(root);
    int key;
    cout<<"Enter key : ";
    cin>>key;
    deleteNode(root, key);
    cout<<"After deletion (InOrder) : ";
    inOrder(root);
    return 0;
}