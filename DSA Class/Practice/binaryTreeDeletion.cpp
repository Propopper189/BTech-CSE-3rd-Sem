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
        return insert(root->left, data);
    }
    else
    {
        return insert(root->right, data);
    }
}

void inOrder(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

Node* inPre(Node *root)
{
    while(root->right != NULL)
    {
        root = root->right;
    }
    return root;
}
Node* deleteNode(Node *root, int data)
{
    if(root == NULL)
    {
        return NULL;
    }
    else if(data < root->data)
    {
        root->left = deleteNode(root->left, data);
    }
    else if(data > root->data)
    {
        root->right = deleteNode(root->right, data);
    }
    else
    {
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        else if(root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else
        {
            Node *iPre = inPre(root->left);
            root->data = iPre->data;
            root->left = deleteNode(root->left, iPre->data);
        }
    }
    return root;
}

int main()
{
    int n;
    cin>>n;
    Node *root = NULL;
    for(int i = 0; i < n; i++)
    {
        int data;
        cin>>data;
        insert(root, data);
    }
    inOrder(root);
    cout<<endl;
    int key;
    cin>>key;
    root = deleteNode(root, key);
    inOrder(root);
    return 0;
}