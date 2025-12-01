#include <iostream>
using namespace std;

template<typename T>
T add(T a, T b)
{
    return a + b;
}
int main()
{
    char a, b; // you can directly write int a, b; | double a, b; | and so on..
    cin>>a>>b;
    cout<<add(a, b)<<endl;
    return 0;
}