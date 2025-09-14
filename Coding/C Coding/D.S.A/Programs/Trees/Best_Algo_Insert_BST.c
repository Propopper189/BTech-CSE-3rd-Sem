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
        else if(data < (*root)->data)
        {
            return insert(&((*root)->left), data);
        }
        else
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
        }
        else if(data < prev->data)
        {
            prev->left = new;
        }
        else
        {
            prev->right = new;
        }
    }
}

struct node* inOrderPredecessor(struct node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}
struct node* deleteNode(struct node *root, int data)
{
    if(root == NULL)
    {
        return NULL;
    }
    if(root->left == NULL && root->right == NULL)
    {
        free(root);
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
    else if(root->data == data)
    {
        struct node *iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        root->left = deleteNode(root->left, iPre->data);
    }
    return root;
}
int main (){
    struct node *root = NULL;
    printf("Before Insertion : ");
    if(root == NULL)
    {
        printf("Empty Tree!\n");
    }
    else
    {
        inOrder(root);
        printf("\n");
    }
    insert(&root, 12);
    insert(&root, 13);
    insert(&root, 11);
    insert(&root, 10);
    insert(&root, 9);
    printf("After Insertion : \n");
    
    if(root == NULL)
    {
        printf("Empty Tree!\n");
    }
    else
    {
        printf("InOrder Traversal : ");
        inOrder(root);
        printf("\n");
        printf("| ROOT -> %d |\n", root->data);
        printf("| BIGGER THAN ROOT -> %d |\n", root->right->data);
    }
    printf("ALL IN O(log(n)) TIME COMPLEXITY!\n");

    deleteNode(root, 12);
    inOrder(root);
    return 0;
}