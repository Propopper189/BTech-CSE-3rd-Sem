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

struct node* search(struct node *root, int key)
{
    if(root == NULL)
    {
        return NULL;
    }
    if(root->data == key)
    {
        return root;
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

int isBST(struct node *root)
{
    if(root != NULL)
    {
        static struct node *prev = NULL;
        if(isBST(root->left) == 0)
        {
            return 0;
        }
        if(prev != NULL && prev->data >= root->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else
    {
        return 1;
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
    
    inOrder(root);
    printf("\n");
    if(isBST(root))
    {
        printf("BST!\n");
    }
    else
    {
        printf("Not a BST!\n");
    }
    int key = 6;
    struct node *check = search(root, key);
    if(check != NULL)
    {
        printf("Found : %d", check->data);
    }
    else
    {
        printf("%d was not found!", key);
    }
    return 0;
}