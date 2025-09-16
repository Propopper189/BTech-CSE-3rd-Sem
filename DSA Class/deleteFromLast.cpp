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

void insertAtLast(Node* &head, int val)
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
        cout<<"Nothing to display"<<endl;
        return;
    }
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

void deleteFromStart(Node* &head)
{
    if(head == NULL)
    {
        cout<<"Empty List";
        return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
}

void deleteFromLast(Node* &head)
{
    if(head == NULL)
    {
        cout<<"No data"<<endl;
        return;
    }
    if(head->next == NULL)
    {
        Node *temp = head;
        delete temp;
        head = NULL;
        return;
    }
    Node *temp = head;
    Node *temp1 = head;
    while(temp->next != NULL)
    {
        temp1 = temp;
        temp = temp->next;
    }
    temp1->next = NULL;
    delete temp;
    
}
int main() {
    struct Node *head = NULL;
    int n;
    cin>>n;
    int val;
    for(int i = 0; i < n; i++)
    {
        cin>>val;
        insertAtLast(head, val);
    }
    display(head);
    deleteFromLast(head);
    display(head);
    return 0;
}