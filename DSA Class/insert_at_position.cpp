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

void insert_at_position(Node* &head, int val, int pos)
{
    Node *newNode = new Node(val);
    if(pos == 0)
    {
        insert_at_start_cll(head, val);
        return;
    }
    Node *temp = head;
    Node *temp1 = head;
    for(int i = 0; i < pos; i++)
    {
        temp1 = temp;
        temp = temp->next;
    }
    if(temp1 == head)
    {
        cout<<"Inavlid Position!\n";
        delete newNode;
        return;
    }
    temp1->next = newNode;
    newNode->next = temp;
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
    int pos;
    cin>>val;
    cin>>pos;
    insert_at_position(head, val, pos);
    display(head);
    return 0;
}