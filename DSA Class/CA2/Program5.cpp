#include <iostream>
using namespace std;

int top = -1;
int arr[10];
void push(int data)
{
    if(top == 10 - 1)
    {
        cout<<"Stack Overflow\n";
        return;
    }
    arr[++top] = data;
}

int pop()
{
    if(top == -1)
    {
        cout<<"Stack Underflow\n";
        return -1;
    }
    return arr[top--];
}
int main()
{
    for(int i = 0; i < 10; i++)
    {
        int data; 
        cin>>data;
        push(data);
    }
    for(int i = 0; i < 10; i++)
    {
        cout<<pop()<<" ";
    }
    return 0;
}