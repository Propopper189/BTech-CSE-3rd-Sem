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

// void insert(Node* &root, int data)
// {
//     Node *newNode = new Node(data);
//     if(root == NULL)
//     {
//         root = newNode;
//         return;
//     }
//     Node *temp = root;
//     while(temp != NULL)
//     {
//         if(data < temp->data)
//         {
//             if(temp->left == NULL)
//             {
//                 temp->left = newNode;
//                 return;
//             }
//             temp = temp->left;
//         }
//         else
//         {
//             if(temp->right == NULL)
//             {
//                 temp->right = newNode;
//                 return;
//             }
//             temp = temp->right;
//         }
//     }
// }

Node* insert(Node* root, int data)
{
    Node *newNode = new Node(data);
    if(root == NULL)
    {
        return newNode;
    }
    if(data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
    return root;
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
int main()
{
    Node *root = NULL;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        int data;
        cin>>data;
        root = insert(root, data);
    }
    inOrder(root);
    return 0;
}