#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void display(struct node *ptr)
{
    while(ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    if(ptr == NULL)
    {
        printf("NULL\n");
    }
}
struct node* insertAfterANode(struct node *nod, int data)
{
    struct node *p = (struct node*) malloc(sizeof(struct node));
    p->data = data;
    p->next = nod->next;
    nod->next = p;
    return nod;
}
int main (){
    struct node *head, *second, *third;
    head = (struct node*) malloc(sizeof(struct node));
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));
    head->data = 12;
    head->next = second;
    second->data = 13;
    second->next = third;
    third->data = 14;
    third->next = NULL;
    display(head);
    insertAfterANode(second, 555);
    display(head);
    return 0;
}