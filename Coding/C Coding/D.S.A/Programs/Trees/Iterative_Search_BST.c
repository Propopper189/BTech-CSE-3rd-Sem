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

struct node* iterativeSearch(struct node *root, int key)
{
    while (root != NULL)
    {
        if(root->data == key)
        {
            return root; // Return the node if the key is found
        }
        else if(key < root->data)
        {
            root = root->left; // Move to the left subtree
        }
        else
        {
            root = root->right; // Move to the right subtree
        }
    }
    return NULL; // Return NULL if key is not found
    
}

int isBST(struct node *root)
{
    // Inorder Traversal Should Be in Ascending Order.
    if(root != NULL)
    {
        static struct node *prev = NULL;
        if(!isBST(root->left)) // When root->left is not a BST
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

    inOrder(root);
    printf("\n");
    if(isBST(root))
    {
        int key = 6;
        struct node *check = iterativeSearch(root, key);
        if(check == NULL)
        {
            printf("Not found");
        }
        else
        {
            printf("Found : %d", check->data);
        }
    }
    return 0;
}