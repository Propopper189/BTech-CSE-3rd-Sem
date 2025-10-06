#include <iostream>
using namespace std;

int rear = -1;
int front = -1;
#define max_size 10
int arr[max_size];

void enqueue(int data)
{
    if(((rear + 1) % max_size) == front)
    {
        cout<<"Queue is full\n";
        return;
    }
    else if(rear == -1 && front == -1)
    {
        front = 0;
        rear = 0;
        arr[rear] = data;
        return;
    }
    rear = (rear + 1) % max_size;
    arr[rear] = data;
}

void dequeue()
{
    if(front == -1)
    {
        cout<<"Queue is empty\n";
        return;
    }
    else if((1))
    {

    }
}

void display()
{
    
}

int main()
{
    int choice, data;
    while(true)
    {
        cin>>choice;
        switch(choice)
        {
            case 1:
                cin>>data;
                enqueue(data);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                cout<<"Invalid Choice\n";
                break;
        }
    }
    return 0;
}