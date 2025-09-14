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

void insertAtFirst(Node* &head, int element)
{
    Node *newNode = new Node(element);
    newNode->next = head;
    head = newNode;
}

void display(Node *head)
{
    if(head == NULL)
    {
        cout<<"No element"<<endl;
    }
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int val;
    Node *head = NULL;
    for(int i = 0; i < n; i++)
    {
        cin>>val;
        insertAtFirst(head, val);
    }
    display(head);
    
    return 0;
}