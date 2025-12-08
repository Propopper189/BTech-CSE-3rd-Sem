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

void deletePos(Node* &head, int pos)
{
    if(head == NULL)
    {
        cout<<"Nothing to delete\n";
        return;
    }
    if(pos < 0)
    {
        cout<<"Invalid Position\n";
        return;
    }
    if(pos == 0)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }
    int i = 0; 
    Node *temp = head;
    while(i < pos-1 && temp != NULL)
    {
        i++;
        temp = temp->next;
    }
    if(temp == NULL || temp->next == NULL)
    {
        cout<<"Invalid Position\n";
        return;
    }
    Node *temp1 = temp->next;
    temp->next = temp->next->next;
    delete temp1;
}
void print(Node *head)
{
    if(head == NULL)
    {
        cout<<"Nothing to display\n";
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
    int n;
    cin>>n;
    if(n < 1)
    {
        cout<<"Enter some nodes\n";
        return 0;
    }
    Node *head = NULL;
    for(int i = 0; i < n; i++)
    {
        int data;
        cin>>data;
        insertAtEnd(head, data);
    }
    cout<<"Before deletion : ";
    print(head);
    int pos;
    cin>>pos;
    deletePos(head, pos);
    cout<<"After deletion : ";
    print(head);
    return 0;
}