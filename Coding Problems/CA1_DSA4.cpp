#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
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
        cout<<"No Data"<<endl;
        return;
    }
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

void reverse(Node *head)
{
    static int i = 0;
    if(i == 0)
    {
        cout<<"Reversed Linked List : ";
        i++;
    }
    if(head != NULL)
    {
        reverse(head->next);
        cout<<head->data<<" ";
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
    reverse(head);
    return 0;
}