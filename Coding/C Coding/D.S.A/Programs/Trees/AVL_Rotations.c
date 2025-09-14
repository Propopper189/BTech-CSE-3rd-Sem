#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
    int height;
};

int max(int a, int b)
{
    return a>b?a:b;
}

int getHeight(struct node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    return root->height;
}

struct node* createNode(int data)
{
    struct node *new = (struct node*) malloc(sizeof(struct node));
    new->data = data;
    new->left = NULL;
    new->right = NULL;
    new->height = 1;
    return new;
}

struct node* leftRotate(struct node *x)
{
    struct node* y = x->right;
    struct node *T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;

    return y;
}

struct node* rightRotate(struct node *y)
{
    struct node *x = y->left;
    struct node *T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;

    return x;
}

int getBalancedFactor(struct node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    return getHeight(root->right) - getHeight(root->left);
}

struct node* insert(struct node *root, int data)
{
    if(root == NULL)
    {
        return createNode(data);
    }
    if(root->data == data)
    {
        printf("Cannot Insert!\n");
        return root;
    }
    if(data < root->data)
    {
        root->left = insert(root->left, data);
    }
    if(data > root->data)
    {
        root->right = insert(root->right, data);
    }
    root->height = max(getHeight(root->left), getHeight(root->right)) + 1;
    int balanceFactor = getBalancedFactor(root);
    // Left Left Case : 
    if(balanceFactor < -1 && data < root->left->data)
    {
        root = rightRotate(root);
        printf("Left Left Case | Data -> %d |\n", data);
    }
    // Left Right Case : 
    if(balanceFactor < -1 && data > root->left->data)
    {
        printf("Left Right Case | Data -> %d |\n", data);
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }
    // Right Right Case : 
    if(balanceFactor > 1 && data > root->right->data)
    {
        printf("Right Right Case | Data -> %d |\n", data);
        root = leftRotate(root);
    }
    // Right Left Case : 
    if(balanceFactor > 1 && data < root->right->data)
    {
        printf("Right Left Case | Data -> %d |\n", data);
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }
    return root;
}

void preOrder(struct node *root)
{
    if(root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(struct node *root)
{
    if(root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

int main ()
{
    struct node *root = NULL;
    root = insert(root, 12);
    root = insert(root, 13);
    root = insert(root, 14);
    root = insert(root, 16);
    root = insert(root, 11);
    root = insert(root, 10);
    inOrder(root);
    printf("\n");
    printf("| Root's Height -> %d |", getHeight(root));
    return 0;
}