#include <iostream>
#include <cstdlib>
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
        cout<<"No data"<<endl;
        return;
    }
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

void insert_at_first(Node* &head, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
void reverse(Node* &head)
{
    Node *temp = head;
    Node *temp1 = head;
    Node *reverse = NULL;
    while(temp != NULL)
    {
        insert_at_first(reverse, temp->data);
        temp1 = temp;
        temp = temp->next;
        delete temp1;
    }
    head = reverse;
}
int main()
{
    Node *head = NULL;
    int n;
    cin>>n;
    int element;
    for(int i = 0; i < n; i++)
    {
        cin>>element;
        insert_at_last(head, element);
    }
    cout<<"Linked List : ";
    display(head);
    reverse(head);
    cout<<"Reversed Linked List : ";
    display(head);
    return 0;
}