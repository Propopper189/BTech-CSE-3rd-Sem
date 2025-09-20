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

void insert_at_first(Node* &head, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        // cout<<"Node inserted"<<endl;
        return;
    }
    newNode->next = head;
    head = newNode;
    // cout<<"Node inserted"<<endl;
}

void display(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        temp = temp->next;
        cout<<"Node inserted"<<endl;
    }
    temp = head;
    cout<<"Linked List: ";
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\nNode Ended"<<endl;
}
int main()
{
    int yes = 0;
    Node *head = NULL;
    int val;
    // int count = 0;
    while(yes != 1)
    {
        cin>>val;
        insert_at_first(head, val);
        // count++;
        cin>>yes;
    }
    // for(int i = 0; i < count; i++)
    // {
    //     cout<<"Node inserted"<<endl;
    // }
    display(head);
    return 0;
}