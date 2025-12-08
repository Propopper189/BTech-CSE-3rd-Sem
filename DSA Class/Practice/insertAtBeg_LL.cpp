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

void insertAtBeg(Node *&head, int data)
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
}
int main()
{
    Node *head = NULL;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        int data;
        cin>>data;
        insertAtBeg(head, data);
    }
    print(head);
    return 0;
}