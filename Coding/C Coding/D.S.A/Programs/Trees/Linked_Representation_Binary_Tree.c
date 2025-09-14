// Linked Representation Of Binary Trees

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// Creating a function to create a node
struct node* createNode(int data)
{
    struct node *p; // Creating a node pointer.
    p = (struct node*) malloc(sizeof(struct node)); // Allocating memory in the heap
    p->data = data; // Pushing the data into the node
    p->left = NULL; // Setting the left children of the created node to NULL;
    p->right = NULL; // Setting the right children of the created node to NULL;
    return p; // Finally returning the created node
}

int main (){
    // Constructing the root node - Using Function (recommended)
    struct node *root = createNode(2);
    struct node *p1 = createNode(1);
    struct node *p2 = createNode(4);

    // Linking the root node with left and right children
    root->left = p1;
    root->right = p2;

    // Printing The Values Manually
    printf("  %d\n", root->data);
    printf("%d \t%d\n", (root->left)->data, (root->right)->data);
    return 0;
}