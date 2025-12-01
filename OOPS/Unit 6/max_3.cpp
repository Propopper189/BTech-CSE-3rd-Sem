#include <iostream>
using namespace std;

template<typename name1, typename name2>

name2 max(name1 a, name2 b, name2 c)
{
    if(a > b && a > c)
    {
        return a;
    }
    else if(b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    int a;
    double b, c;
    cin>>a>>b>>c;
    cout<<max(a, b, c);
    return 0;
}