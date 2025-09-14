#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
    int height;
};

struct node* createNode(int data)
{
    struct node *p = (struct node*) malloc(sizeof(struct node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    p->height = 1;
    return p;
}

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
    else
    {
        return root->height;
    }
}

int getBalancedFactor(struct node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    else
    {
        return getHeight(root->right) - getHeight(root->left);
    }
}
struct node* rightRotate(struct node *y)
{
    struct node *x = y->left;
    struct node *T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height  = max(getHeight(y->left), getHeight(y->right)) + 1;
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;

    return x;
}
struct node* leftRotate(struct node *x)
{
    struct node *y = x->right;
    struct node *T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;

    return y;
}

struct node* insert(struct node *root, int data)
{
    if(root == NULL)
    {
        return createNode(data);
    }
    if(data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else if(data > root->data)
    {
        root->right = insert(root->right, data);
    }
    else if(data == root->data)
    {
        printf("Cannot Insert!\n");
        return root;
    }

    root->height = max(getHeight(root->left), getHeight(root->right)) + 1;
    int balancedFactor = getBalancedFactor(root);

    // Left Left Case
    if(balancedFactor < -1 && data < root->left->data)
    {
        return rightRotate(root);
    }
    // Right Right Case
    if(balancedFactor > 1 && data > root->right->data)
    {
        return leftRotate(root);
    }
    // Left Right Case
    if(balancedFactor < -1 && data > root->left->data)
    {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }
    // Right Left Case
    if(balancedFactor > 1 && data < root->right->data)
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }
    return root;
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

void preOrder(struct node *root)
{
    if(root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
int main (){
    // A.V.L Trees : Height Balanced Trees!
    struct node *root = NULL;
    root = insert(root, 11);
    root = insert(root, 9);
    root = insert(root, 18);
    root = insert(root, 5);
    root = insert(root, 10);
    root = insert(root, 4);
    // root = insert(root, 6);
    printf("InOrder Traversal : ");
    inOrder(root);
    printf("\n");
    printf("PreOrder Traversal : ");
    preOrder(root);
    printf("\n");
    printf("%d\n", getHeight(root));
    return 0;
}