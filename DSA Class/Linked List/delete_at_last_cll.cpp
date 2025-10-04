#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

void insert_at_last_cll(Node* &head, int element)
{
    Node *newNode = new Node(element);
    if(head == NULL)
    {
        head = newNode;
        head->next = newNode;
        return;
    }
    Node *temp = head;
    while(temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
}
void display(Node *head)
{
    if(head == NULL)
    {
        cout<<"No Data";
        return;
    }
    Node *temp = head;
    do
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp != head);
    cout<<endl;
}
void delete_at_last(Node* &head)
{
    if(head == NULL)
    {
        cout<<"Nothing to delete"<<endl;
        return;
    }
    if(head->next == head)
    {
        Node *temp = head;
        head = NULL;
        delete temp;
        return;
    }
    Node *temp = head;
    while(temp->next->next != head)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = head;
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
        insert_at_last_cll(head, val);
    }
    display(head);
    delete_at_last(head);
    display(head);
    return 0;
}