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

void insert_at_start_cll(Node * &head, int element)
{
    Node *newNode = new Node(element);
    if(head == NULL)
    {
        head = newNode;
        head->next = head;
        return;
    }
    Node *temp = head;
    while(temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    head = newNode;
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
        insert_at_start_cll(head, val);
    }
    display(head);
    return 0;
}
//