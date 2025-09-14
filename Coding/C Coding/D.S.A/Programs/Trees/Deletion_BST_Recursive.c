#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* createNode(int data)
{
    struct node *p = (struct node*) malloc(sizeof(struct node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
}

struct node* inOrderPre(struct node *root)
{
    if(root->right != NULL)
    {
        root = inOrderPre(root->right);
    }
    return root;
}

struct node* deleteNode(struct node **root, int data)
{
    if(*root == NULL)
    {
        return NULL;
    }
    if((*root)->left == NULL && (*root)->right == NULL)
    {
        free(*root);
        *root = NULL;
        return NULL;
    }
    else if(data < (*root)->data)
    {
        (*root)->left = deleteNode(&((*root)->left), data);
    }
    else if(data > (*root)->data)
    {
        (*root)->right = deleteNode(&((*root)->right), data);
    }
    else
    {
        struct node *iPre = inOrderPre((*root)->left);
        (*root)->data = iPre->data;
        (*root)->left = deleteNode(&((*root)->left), iPre->data);
    }
    return *root;
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

void insert(struct node **root, int data)
{
    static struct node *prev = NULL;
    if(*root != NULL)
    {
        prev = *root;
        if(data == (*root)->data)
        {
            printf("Cannot Insert!\n");
            return;
        }
        if(data < (*root)->data)
        {
            return insert(&((*root)->left), data);
        }
        if(data > (*root)->data)
        {
            return insert(&((*root)->right), data);
        }
        
    }
    else
    {
        struct node *new = createNode(data);
        if(prev == NULL)
        {
            *root = new;
            return;
        }
        if(data < prev->data)
        {
            prev->left = new;
        }
        else if(data > prev->data)
        {
            prev->right = new;
        }
    }
}
int main (){
    struct node *root = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);

    root->left = p1;
    root->right = p2;

    p1->left = p3;
    p1->right = p4;

    /*
    The tree looks like this..
        5
       / \
      3   6
     / \
    1   4
    */

    deleteNode(&root, 5);
    deleteNode(&root, 6);
    deleteNode(&root, 3);
    deleteNode(&root, 4);
    deleteNode(&root, 1);
    inOrder(root);
    printf("\n");

    insert(&root, 10);
    insert(&root, 11);
    insert(&root, 9);
    inOrder(root);
    printf("\n");
    return 0;
}