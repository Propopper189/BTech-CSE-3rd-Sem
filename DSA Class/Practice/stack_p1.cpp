/*
Q1. Stack using Array
Write a program to implement a 
stack using arrays with operations:
push
pop
display
*/

#include <iostream>
#include <climits>
using namespace std;

struct stack
{
    int *arr;
    int top;
    int size;
    stack(int n)
    {
        size = n;
        arr = new int[n];
        top = -1;
    }
    void push(int data)
    {
        if(top >= size - 1)
        {
            cout<<"Stack Overflow\n";
            return;
        }
        top++;
        arr[top] = data;
    }
    int pop()
    {
        if(top < 0)
        {
            cout<<"Nothing to pop\n";
            return INT_MIN;
        }
        // if(top == 0)
        // {
            int val = arr[top];
            top--;
            return val;
        // }
    }
    void display()
    {
        for(int i = top; i >= 0; i--)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    int n;
    cin>>n;
    stack s(n);
    for(int i = 0; i < n; i++)
    {
        int data;
        cin>>data;
        s.push(data);
    }
    // for(int i = 0; i < n; i++)
    // {
    //     cout<<s.pop()<<" ";
    // }
    s.display();
    return 0;
}