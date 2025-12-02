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

void insert(Node* &head, int data)
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

Node* findMid(Node *head)
{
    if(head == NULL)
    {
        cout<<"Empty\n";
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
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
        insert(head, data);
    }
    Node *mid = findMid(head);
    cout<<mid->data<<endl;
    return 0;
}