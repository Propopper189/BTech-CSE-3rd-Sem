// an array of size n is given
// take n space separated input from the user
// user will enter another value
// check if any two elements have sum == value or not
// (TWO SUM)

#include <iostream>
using namespace std;

int main()
{
    int sum, n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>sum;
    int yes = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                cout<<"YES"<<endl;
                yes = 1;
                break;
            }
        }
        if(yes == 1)
        {
            break;
        }
    }
    if(yes == 0)
    {
        cout<<"No";
    }
    return 0;
}