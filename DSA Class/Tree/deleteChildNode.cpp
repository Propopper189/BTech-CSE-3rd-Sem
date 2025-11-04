#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

Node* insert(Node* &root, int data)
{
    if(root == NULL)
    {
        root = new Node(data);
        return root;
    }
    if(data < root->data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);
    return root;
}

void inOrder(Node *root)
{
    if(root != NULL)
    {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}

Node* inOrderPred(Node* root)
{
    while(root->right != NULL)
        root = root->right;
    return root;
}

Node* deleteNode(Node *root, int data)
{
    if(root == NULL)
    {
        return NULL;
    }
    if(data < root->data)
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
            Node *iPre = inOrderPred(root->left);
            root->data = iPre->data;
            root->left = deleteNode(root->left, iPre->data);
        }
    }
    return root;
}
Node* deleteAllChild(Node *root)
{
    if(root == NULL)
    {
        return root;
    }
    if(root->left == NULL && root->right == NULL)
    {
        delete root;
        return NULL;
    } 
    root->left = deleteAllChild(root->left);
    root->right = deleteAllChild(root->right);
    return root;
}
int main()
{
    Node *root = NULL;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        insert(root, data);
    }

    cout << "Inorder before deletion: ";
    inOrder(root);
    cout << endl;
    root = deleteAllChild(root);
    cout << "Inorder after deletion: ";
    inOrder(root);
    cout << endl;

    return 0;
}
