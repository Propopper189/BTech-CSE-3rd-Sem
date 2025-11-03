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

int minNode(Node *root)
{
    static int min = root->data;
    if(root != NULL)
    {
        if(root->data < min)
        {
            min = root->data;
        }
        minNode(root->left);
        minNode(root->right);
    }
    return min;
}
int maxNode(Node *root)
{
    static int max = root->data;
    if(root != NULL)
    {
        if(max < root->data)
        {
            max = root->data;
        }
        maxNode(root->left);
        maxNode(root->right);
    }
    return max;
}

Node* insert(Node* &root, int data)
{
    if(root == NULL)
    {
        Node *newNode = new Node(data);
        root = newNode;
        return root;
    }
    if(data < root->data)
    {
        return insert(root->left, data);
    }
    else
    {
        return insert(root->right, data);
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

int sum(Node *root)
{
    static int sumI = 0;
    if(root != NULL)
    {
        sumI += root->data;
        sum(root->left);
        sum(root->right);
    }
    return sumI;
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
    int max = -1, min = -1;
    inOrder(root);
    if(root != NULL)
    {
        max = maxNode(root);
        min = minNode(root);
    }
    cout<<endl;
    cout<<"Min: "<<min<<" Max: "<<max<<endl;
    cout<<"Sum: "<<sum(root);
    return 0;
}