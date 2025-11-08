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

Node* insert(Node *root, int data)
{
    if(root == NULL)
    {
        Node *newNode = new Node(data);
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

Node* inOrderPre(Node *root)
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
    if(data < root->data)
    {
        root->left = deleteNode(root->left, data);
    }
    else if(data > root->data)
    {
        root->right = deleteNode(root->right, data);
    }
    else if(data == root->data)
    {
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        if(root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        if(root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else
        {
            Node *iPre = inOrderPre(root->left);
            root->data = iPre->data;
            root->left = deleteNode(root->left, iPre->data);
        }
    }
    return root;
}

Node *deleteChildNodes(Node *root)
{
    if(root == NULL)
    {
        return NULL;
    }
    root->left = deleteChildNodes(root->left);
    root->right = deleteChildNodes(root->right);
    if((root->left == NULL && root->right == NULL) && root != NULL)
    {
        delete root;
        return NULL;
    }
    return root;
}

int main()
{
    int n;
    cin >> n;
    Node *root = NULL;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        root = insert(root, data);
    }

    cout << "Original BST (in-order): ";
    inOrder(root);
    cout << endl;

    root = deleteChildNodes(root);

    cout << "BST after deleting all leaf nodes (in-order): ";
    inOrder(root);
    cout << endl;

    return 0;

}