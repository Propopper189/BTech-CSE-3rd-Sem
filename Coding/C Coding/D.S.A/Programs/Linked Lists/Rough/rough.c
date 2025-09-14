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
void insert(struct node *ptr)
{
    for(int i = 1; ptr != NULL; i++)
    {
        ptr->data = i;
        ptr = ptr->next;
    }
}
int main (){
    struct node *head, *second, *third;
    head = (struct node*) malloc(sizeof(struct node));
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));
    head->next = second;
    second->next = third;
    third->next = NULL;
    insert(head);
    display(head);
    return 0;
}