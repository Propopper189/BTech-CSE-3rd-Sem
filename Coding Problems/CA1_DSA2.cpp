#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insert_at_last(Node* &head, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void display(Node *head)
{
    if(head == NULL)
    {
        cout<<"Linked List is empty"<<endl;
        return;
    }
    cout<<"Linked list: ";
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main()
{
    Node *head = NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val < 0)
        {
            break;
        }
        insert_at_last(head, val);
    }
    display(head);
    return 0;
}