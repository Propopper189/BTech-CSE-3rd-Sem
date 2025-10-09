#include <iostream>
#include <algorithm>
using namespace std;

struct Patient
{
    string name;
    int severity;
};

void display(Patient *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i].name<<" "<<arr[i].severity<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    Patient arr[n];
    string name;
    int s;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i].name>>arr[i].severity;
    }
    sort(arr, arr + n);
    display(arr, n);
    return 0;
}