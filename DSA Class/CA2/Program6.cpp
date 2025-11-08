#include <iostream>
using namespace std;

int r = -1, f = -1;
int arr[10];
void enque(int data)
{
    if(r == -1)
    {
        f++;
    }
    r++;
    if(r == 10)
    {
        cout<<"Queue Full\n";
        r--;
    }
    arr[r] = data;
}

int deque()
{
    if(f == -1)
    {
        return -1;
    }
    if(r == f)
    {
        int data = arr[f];
        f = -1, r = -1;
        return data;
    }
    return arr[f++];
}
int main()
{
    for(int i = 0; i < 10; i++)
    {
        int data;
        cin>>data;
        enque(data);
    }
    for(int i = 0; i < 10; i++)
    {
        cout<<deque()<<" ";
    }
    return 0;
}