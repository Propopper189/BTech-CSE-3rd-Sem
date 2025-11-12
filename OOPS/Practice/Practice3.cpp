#include <iostream>
using namespace std;

int main()
{
    int k, n, w;
    cin>>k>>n>>w;
    int total = 0;
    for(int i = 1; i <= w; i++)
    {
        total += i * k;
    }
    int b = n - total;
    if(b < 0)
    {
        cout<<total - n;
    }
    else
    {
        cout<<"0";
    }
    return 0;
}