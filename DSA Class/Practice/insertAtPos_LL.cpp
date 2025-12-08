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

void insertAtBeg(Node* &head, int data)
{
    Node *newNode = new Node(data);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void print(Node *head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

void insertAtPos(Node* &head, int pos, int data)
{
    if(pos < 0)
    {
        cout<<"Negative Position Invalid\n";
        return;
    }
    if(pos == 0)
    {
        insertAtBeg(head, data);
        return;
    }
    int i = 0;
    Node *temp = head;
    while(i < pos -1 && temp != NULL)
    {
        temp = temp->next;
        i++;
    }
    Node *newNode = new Node(data);
    if(temp == NULL)
    {
        cout<<"Invalid Position\n";
        delete newNode;
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
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
        insertAtBeg(head, data);
    }
    cout<<"Before Inserting At Pos : ";
    print(head);
    int pos, data;
    cin>>pos;
    cin>>data;
    insertAtPos(head, pos, data);
    cout<<"After Inserting At Pos : ";
    print(head);
    return 0;   
}