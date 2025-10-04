#include <iostream>
using namespace std;

#define max_size 10
struct stack
{
    int top;
    int arr[max_size];
    stack()
    {
        top = -1;
    }
};

void push(struct stack &s1, int data)
{
    if(s1.top == max_size - 1)
    {
        cout<<"Stack Overflow\n";
        return;
    }
    s1.top++;
    s1.arr[s1.top] = data;
}

void pop(struct stack &s1)
{
    if(s1.top == -1)
    {
        cout<<"Nothing To Delete\n";
        return;
    }
    s1.top--;
}

void display(struct stack &s1)
{
    if(s1.top == -1)
    {
        cout<<"Nothing To Display\n";
        return;
    }
    cout<<"Stack : \n";
    for(int i = s1.top; i >= 0; i--)
    {
        cout<<s1.arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    stack s1;
    int element;
    int choice;
    while(true)
    {
        cout<<"1. Push (Insert)\n";
        cout<<"2. Pop (Delete)\n";
        cout<<"3. Display (Print)\n";
        cout<<"4. Exit (Return)\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter Data To Push : ";
                cin>>element;
                push(s1, element);
                break;
            case 2:
                pop(s1);
                break;
            case 3:
                display(s1);
                break;
            case 4:
                exit(0);
                break;
            default:
                cout<<"Invalid Option"<<endl;
                break;
        }
    }
    return 0;
}