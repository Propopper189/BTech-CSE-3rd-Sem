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

void insertAtEnd(Node* &head, int data)
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

void print(Node *head)
{
    if(head == NULL)
    {
        cout<<"Empty List\n";
        return;
    }
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

void deleteFirst(Node* &head)
{
    if(head == NULL)
    {
        cout<<"Nothing to delete\n";
        return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
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
        insertAtEnd(head, data);
    }
    print(head);
    deleteFirst(head);
    deleteFirst(head);
    deleteFirst(head);
    deleteFirst(head);
    print(head);
    return 0;
}