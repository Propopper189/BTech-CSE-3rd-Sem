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
    while(root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

int search(struct node *root, int data)
{
    if(root != NULL)
    {
        if(data == root->data)
        {
            return root->data;
        }
        else if(data < root->data)
        {
            return search(root->left, data);
        }
        else
        {
            return search(root->right, data);
        }
    }
    else
    {
        return -1;
    }
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
    else
    {
        struct node *iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        root->left = deleteNode(root->left, data);
    }
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
    }

    insert(&root, 4);
    insert(&root, 2);
    insert(&root, 3);
    insert(&root, 5);
    insert(&root, 1);


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
        if(root->right != NULL)
        {
            printf("| BIGGER THAN ROOT -> %d | \n", root->right->data);
        }
    }

    // Check if Search Is Working
    int test = search(root, 6);
    if(test != -1)
    {
        printf("YES! %d is Present\n", test);
    }
    else
    {
        printf("No!\n");
    }

    printf("After Deletion : \n");

    deleteNode(root, 5);
    deleteNode(root, 4);
    deleteNode(root, 2);
    deleteNode(root, 3);

    printf("InOrder Traversal : ");
    inOrder(root);
    printf("\n");
    return 0;
}