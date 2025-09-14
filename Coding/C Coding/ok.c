#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *right;
    struct node *left;
    char *name;
};

struct node *creatNode(int salary, char *name)
{
    struct node *new = (struct node*) malloc(sizeof(struct node));
    new->name = (char*) malloc(10 * sizeof(char));
    for(int i = 0; name[i] != '\0'; i++)
    {
        new->name[i] = name[i];
    }
    new->data = salary;
    new->left = NULL;
    new->right = NULL;
    return new;
}

void inOrder(struct node *root)
{
    if(root != NULL)
    {
        inOrder(root->left);
        printf("Salary : %d | Name : %s\n", root->data, root->name);
        inOrder(root->right);
    }
}

struct node *insert(struct node **root, int data, char *name)
{
    if(*root == NULL)
    {
        *root = creatNode(data, name);
    }
    if((*root)->data == data)
    {
        return *root;
    }
    else if(data < (*root)->data)
    {
        insert(&((*root)->left), data, name);
    }
    else if(data > (*root)->data)
    {
        insert(&((*root)->right), data, name);
    }
}
int main (){
    struct node *root = NULL;
    int salary;
    char name[10];
    insert(&root, 12, "MAANU");
    insert(&root, 13, "BILAL");
    insert(&root, 11, "MINAH");
    insert(&root, 10, "SHERA");
    insert(&root, 14, "NUHAN");
    insert(&root, 15, "MILAN");
    insert(&root, 9, "ALIZA");
    insert(&root, 8, "MALON");
    insert(&root, 7, "NAMUN");
    insert(&root, 6, "JUMAH");
    insert(&root, 5, "THURS");
    insert(&root, 4, "ASDFG");
    insert(&root, -1, "NAMLI");
    insert(&root, -10, "MKINA");    
    insert(&root, 0, "NAMEH");
    insert(&root, 100000, "MNAK");
    insert(&root, 90, "MINAL");
    inOrder(root);
    return 0;
}