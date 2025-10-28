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

// Binary Tree Insertion Using Loop

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

// Binary Search Tree Insertion Using Recursion

Node* insert(Node* &root, int data)
{
    if(root == NULL)
    {
        Node *newNode = new Node(data);
        root = newNode;
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

int check(Node *root, int key)
{
    if(root == NULL)
    {
        return -1;
    }
    if(root->data == key)
    {
        return 1;
    }
    else if(key < root->data)
    {
        return check(root->left, key);
    }
    else
    {
        return check(root->right, key);
    }
    return -1;
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
    int key;
    cout<<"Enter Key : ";
    cin>>key;
    int a = check(root, key);
    if(a == 1)
    {
        cout<<"Present\n";
    }
    else
    {
        cout<<"Absent\n";
    }
    return 0;
}