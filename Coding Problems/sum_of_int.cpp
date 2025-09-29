#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum = 0;
    while(n != 0)
    {
        sum = sum + (n%10);
        n /= 10;
    }
    char c;
    cout<<sum;
    cout<<endl<<typeid(c).name();
    return 0;
}