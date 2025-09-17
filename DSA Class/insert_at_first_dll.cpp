#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insert_at_first_dll(Node* &head, int element)
{
    Node *newNode = new Node(element);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

void display(Node *head)
{
    if(head == NULL)
    {
        cout<<"No Data To Display"<<endl;
        return;
    }
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
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
        insert_at_first_dll(head, element);
    }
    display(head);
    return 0;
}