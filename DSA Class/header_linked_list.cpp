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

void insert_at_last(Node* &head, int val)
{
    Node *newNode = new Node(val);
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

void display(Node *head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

void find_mid(Node *head)
{
    Node *temp = head;
    int count = 0;
    while(temp != NULL)
    { 
        count++;
        temp = temp->next;
    }
    temp = head;
    int i = 0;
    int mid = count /2;
    while(i < mid)
    {
        temp = temp->next;
    }
    cout<<temp->data;
}
int main()
{
    Node *head = NULL;

}