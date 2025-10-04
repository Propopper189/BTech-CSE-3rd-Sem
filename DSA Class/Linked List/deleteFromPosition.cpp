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

void insertAtStart(Node* &head, int data)
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

void display(Node *head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

void deleteFromPosition(Node* &head, int position)
{
    if(head == NULL)
    {
        cout<<"No element";
        return;
    }
    Node *temp = head;
    if(position == 0)
    {
        head = head->next;
        delete temp;
        return;
    }
    
    for(int i = 0; i < position - 1; i++)
    {
        temp = temp->next;
    }
    if(temp->next == nullptr)
    {
        cout<<"NO";
        cout<<end
        return;
    }
    Node *temp1 = temp->next->next;
    delete temp->next;
    temp->next = temp1;
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
        insertAtStart(head, val);
    }
    display(head);
    int position;
    cin>>position;
    deleteFromPosition(head, position);
    display(head);
    return 0;
}