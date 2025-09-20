#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
void insert_at_position(Node* &head, int val, int pos)
{
    Node *newNode = new Node(val);
    if(pos == 0)
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }
    Node *temp = head;
    for(int i = 0; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }
    if(temp == NULL)
    {
        cout<<"Out of bounds"<<endl;
        return;
    }
    
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next = newNode;
    newNode->next->prev = newNode;
}

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
    newNode->prev = temp;
}

void display(Node *head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main()
{
    Node *head = NULL;
    int n;
    cin>>n;
    int val;
    for(int i = 0; i < n; i++)
    {
        cin>>val;
        insert_at_last(head, val);
    }
    display(head);
    cout<<endl;
    insert_at_position(head, 100, 4);
    display(head);
    return 0;
}