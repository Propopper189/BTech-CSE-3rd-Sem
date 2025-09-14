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
    struct node *p = (struct node*) malloc(sizeof(struct node)); // Create a node
    p->data = data; // push the data into the node
    p->left = NULL; // left pointer of the created node = NULL;
    p->right = NULL; // right pointer of the created node = NULL;
    return p; // return the created node.
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
    // Construct the nodes.
    struct node *root = createNode(4);
    struct node *p1 = createNode(1);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(5);
    struct node *p4 = createNode(2);

    // Linking the root node with left & right children.
    root->left = p1;
    root->right = p2;

    p1->left = p3;
    p1->right = p4;

    printf("PreOrder Traversal : ");
    preOrder(root);

    return 0;
}

/*

    Finally, the tree looks like this.

        4
       / \
      1   6
     / \   
    5   2 

*/