#include <iostream>
using namespace std;

int f = -1, r = -1;

void enque(int *arr, int data, int n)
{
    if(r == n-1)
    {
        cout<<"Queue is full\n";
        return;
    }
    if(f == -1)
    {
        f++;
    }
    r++;
    arr[r] = data;
}
void display(int *arr)
{
    for(int i = f; i <= r; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void deque()
{
    if(r == -1)
    {
        cout<<"Queue is empty\n";
        return;
    }
    if(f == r)
    {
        f = -1, r = -1;
        return;
    }
    f++;
}
int main()
{
    int n = 5;
    int arr[n];  
    enque(arr, 120, n);  
    enque(arr, 12, n);  
    enque(arr, 12, n);  
    enque(arr, 110, n);
    cout<<"Before deque: ";
    display(arr);  
    deque();
    // deque();
    // deque();
    cout<<"After deque: ";
    display(arr);
    return 0;
}