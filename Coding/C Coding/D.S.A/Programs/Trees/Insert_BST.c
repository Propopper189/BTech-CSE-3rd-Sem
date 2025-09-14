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

int isBST(struct node *root)
{
    if(root != NULL)
    {
        static struct node *prev = NULL;
        if(!isBST(root->left))
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

void insert(struct node **root, int data)
{
    if(*root == NULL) // when the root is empty
    {
        *root = createNode(data); // create a node with the data and point the root to that node
        return; // return
    }
    struct node *p = *root; // make a new pointer which points at root
    struct node *prev = NULL; // initialize a previous pointer with NULL
    while (p != NULL) // while p is not equal to NULL
    {
        prev = p; // load "p" pointer in prev
        if(p->data == data) // when data is present inside the tree
        {
            printf("Cannot Insert!\n");
            return; // return 
        }
        if(data < p->data) // when given data is less than the data of "p" pointer
        {
            p = p->left; // move to the left subtree
        }
        else // else
        {
            p = p->right; // move to the right subtree
        }
    }
    struct node *new = createNode(data); // create a "new" node & push the data
    if(data < prev->data) // when given data is less than the data of "prev"
    {
        prev->left = new; // the "new" node should be on the left of the "prev" node
    }
    else // else
    {
        prev->right = new; // the "new" node should be on the right of the "prev" node
    }
    
}

struct node* search(struct node *root, int data)
{
    if(root != NULL)
    {
        if(root->data == data)
        {
            return root;
        }
        if(data < root->data)
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
        return NULL;
    }
}
int main (){
    struct node *root = createNode(9);
    struct node *p1 = createNode(1); 
    struct node *p2 = createNode(13); 

    root->left = p1;
    root->right = p2;
    
    insert(&root, 12);
    insert(&root, 11);
    insert(&root, 20);
    insert(&root, 10);

    if(isBST(root))
    {
        printf("BST!\n");
        inOrder(root);
        printf("\n");
    }
    else
    {
        printf("Not A BST!\n");
    }

    struct node *check = search(root, 20);
    if(check != NULL)
    {
        printf("Found : %d", check->data);
    }
    else
    {
        printf("Not Found!");
    }
    return 0;
}
