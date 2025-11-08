#include <iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            next = NULL;
        }
};  

class List
{
    public:
        Node *head;
        Node *tail;
        List()
        {
            head = NULL;
            head = NULL;
        }
        List(int *ptr, int len)
        {
            head = new Node(ptr[0]);
            Node *q = head;
            tail = head;
            for(int i = 1; i < len; i++)
            {
                Node *temp = new Node(ptr[i]);
                tail = temp;
                q->next = temp;
                q = temp;
            }
        }
        void print()
        {
            Node *temp = head;
            if(head == NULL)
            {
                cout<<"Linked list is empty\n";
                return;
            }
            while(temp != NULL)
            {
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }
        void append(int data)
        {
            if(head == NULL)
            {
                head = new Node(data);
                tail = head;
                return;
            }
            tail->next = new Node(data);
            tail = tail->next;
        }
        void checkLoop()
        {
            Node *fast = head;
            Node *slow = head;
            int i = 0;
            while((fast != NULL) && (fast->next != NULL))
            {
                if(fast == slow && i != 0)
                {
                    cout<<"Loop\n";
                    return;
                }
                i++;
                slow = slow->next;
                fast = fast->next->next;
            }
            cout<<"No loop\n";
        }
        void makeLoop()
        {
            append(12);
            tail->next = head;
        }
};      
int main()
{
    int arr[10];
    for(int i = 0; i < 10; i++)
    {
        arr[i] = i + 1;
    }
    List linkedList1(arr, 10), linkedList2;
    linkedList2.print();
    linkedList1.append(11);
    linkedList1.print();
    linkedList1.makeLoop();
    linkedList1.checkLoop();
    return 0;
}