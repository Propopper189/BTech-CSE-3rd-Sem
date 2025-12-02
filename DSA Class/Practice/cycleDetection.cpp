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

bool detectCycle(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(5);
    head->next->next = new Node(7);
    head->next->next->next = new Node(8);
    head->next->next->next->next = new Node(12);
    head->next->next->next->next->next = new Node(13);
    head->next->next->next->next->next->next = new Node(15);
    head->next->next->next->next->next->next->next = head->next->next;
    if(detectCycle(head))
    {
        cout<<"Cycle detected\n";
    }
    else
    {
        cout<<"No cycle detected\n";
    }
    return 0;
}