#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void insertAtLast(Node* &head, int data)
{
    Node *newNode = new Node(data);
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
void insertAtStart(Node* &head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtPos(Node* &head, int pos, int data)
{
    if(pos == 0)
    {
        insertAtStart(head, data);
        return;
    }
    Node *temp = head;
    for(int i = 1; i < pos; i++)
    {

    }
}

void display(Node *head)
{
    if(head == NULL)
    {
        cout<<"List is empty\n";
        return;
    }
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main()
{
    int n;
    cin>>n;
    Node *head = NULL;
    for(int i = 0; i < n; i++)
    {
        int data;
        cin>>data;
        insertAtLast(head, data);
    }
    display(head);
    return 0;
}