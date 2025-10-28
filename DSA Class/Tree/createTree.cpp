#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node *createTree()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->right = new Node(4);
    root->right->left = new Node(5);
    root->left->left = new Node(6);
    root->left->right = new Node(7);
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
    // cout<<endl;
}

void preOrder(Node *root)
{
    if(root != NULL)
    {
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
    // cout<<endl;
}

void postOrder(Node *root)
{
    if(root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    }
    // cout<<endl;
}
int main()
{
    Node *root = createTree();
    cout<<"1. InOrder\n";
    cout<<"2. PreOrder\n";
    cout<<"3. PostOrder\n";
    cout<<"4. Exit\n";
    // inOrder(root);
    int choice;
    while(true)
    {
        cin>>choice;
        switch(choice)
        {
            case 1:
                inOrder(root);
                cout<<endl;
                break;
            case 2:
                preOrder(root);
                cout<<endl;
                break;
            case 3:
                postOrder(root);
                cout<<endl;
                break;
            case 4:
                cout<<"Exiting Program\n";
                exit(0);
                break;
            default:
                cout<<"Enter Valid Choice\n";
                break;
        }
    }
    return 0;
}