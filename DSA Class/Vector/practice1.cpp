#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node* insert(Node* &root, int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
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

int count(Node *root)
{
    static int x;
    if(root != NULL)
    {
        x++;
        count(root->left);
        count(root->right);
    }
    return x;
}
int main()
{
    Node *root = NULL;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        int data;
        cin>>data;
        insert(root, data);
    }
    inOrder(root);
    cout<<endl;
    cout<<count(root);
    return 0;
}