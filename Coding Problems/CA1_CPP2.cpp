#include <iostream>
using namespace std;

void display(int n)
{
    static int s = 0;
    if(s <= n)
    {
        cout<<s++<<" ";
        display(n);
    }
}
int main()
{
    int n;
    cin>>n;
    display(n);
    return 0;
}