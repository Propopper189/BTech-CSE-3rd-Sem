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
void insertAtPosition(Node* &head, int pos, int val)
{
    Node* newNode = new Node(val);
    if(pos == 0)
    {
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
        cout<<"Invalid Position"<<endl;
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

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
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
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
    cin>>val;
    int pos;
    cin>>pos;
    insertAtPosition(head, pos, val);
    display(head);
    return 0;
}