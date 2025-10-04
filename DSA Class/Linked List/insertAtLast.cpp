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

void insertAtLast(Node *&head, int val)
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
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main() {
    int n;
    cin>>n;
    int val;
    Node *head = NULL;
    for(int i = 0; i < n; i++)
    {
        cin>>val;
        insertAtLast(head, val);
    }
    display(head);
    
    return 0;
}