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

void merge(Node* &head1, Node* &head2, Node* &head3)
{
    while(head1 != NULL)
    {
        insertAtEnd(head3, head1->data);
        head1 = head1->next;
    }
    while(head2 != NULL)
    {
        insertAtEnd(head3, head2->data);
        head2 = head2->next;
    }
}
int main()
{
    int n1;
    cout<<"Number 1 : ";
    cin>>n1;
    Node *head1 = NULL;
    Node *head2 = NULL;
    for(int i = 0; i < n1; i++)
    {
        int data;
        cin>>data;
        insertAtEnd(head1, data);
    }
    cout<<"Number 2 : ";
    int n2;
    cin>>n2;
    for(int i = 0; i < n2; i++)
    {
        int data;
        cin>>data;
        insertAtEnd(head2, data);
    }
    cout<<"Head1 : ";
    print(head1);
    cout<<"Head2 : ";
    print(head2);
    Node *head3 = NULL;
    merge(head1, head2, head3);
    cout<<"Head3 : ";
    print(head3);
    return 0;
}