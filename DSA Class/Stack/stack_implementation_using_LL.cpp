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

void push(Node* &top, int data)
{
    Node *newNode = new Node(data);
    newNode->next = top;
    top = newNode;
}

void pop(Node* &top)
{
    if(top == NULL)
    {
        cout<<"Nothing To Delete"<<endl;
        return;
    }
    Node *temp = top;
    top = top->next;
    delete temp;
}

void display(Node *top)
{
    if(top == NULL)
    {
        cout<<"Nothing To Display"<<endl;
        return;
    }
    Node *temp = top;
    while(temp != NULL)
    {
        cout<< temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}
void showMenu()
{
    cout<<"1. Push (Insert)\n";
    cout<<"2. Pop (Delete)\n";
    cout<<"3. Display (Print)\n";
    cout<<"4. Exit (Return)\n";
}
int main()
{
    Node *top = NULL;
    int choice, element;
    cout<<"1. Push (Insert)\n";
    cout<<"2. Pop (Delete)\n";
    cout<<"3. Display (Print)\n";
    cout<<"4. Exit (Return)\n";
    while(true)
    {
        cin>>choice;
        switch (choice)
        {
            case 1:
                cout<<"Enter Data : ";
                cin>>element;
                push(top, element);
                break;
            case 2:
                pop(top);
                break;
            case 3:
                display(top);
                break;
            case 4:
                exit(0);
                break;
            default:
                cout<<"Invalid Option"<<endl;
                showMenu();
                break;
        }
    }
    return 0;
}