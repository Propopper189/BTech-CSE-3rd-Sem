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

struct node* inOrderPredecessor(struct node *root)
{
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
    else
    {
        struct node *iPre = inOrderPredecessor(root->left);
        root->data = iPre->data;
        root->left = deleteNode(root->left, iPre->data);
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

int search(struct node *root, int key)
{
    if(root != NULL)
    {
        if(key == root->data)
        {
            return 1;
        }
        else if(key < root->data)
        {
            return search(root->left, key);
        }
        else
        {
            return search(root->right, key);
        }
    }
    else
    {
        return 0;
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
    printf("Before Deletion : ");
    inOrder(root);
    printf("\n");
    int key;
    printf("Enter Key : ");
    scanf("%d", &key);
    if(search(root, key))
    {
        deleteNode(root, key);
    }
    printf("After Deletion : ");
    inOrder(root);
    printf("\n");
    return 0;
}