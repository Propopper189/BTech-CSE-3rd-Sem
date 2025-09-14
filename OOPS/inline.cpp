#include <iostream>
using namespace std;
inline void print(int a, int b)
{
    cout<<a + b;
}
inline int add(int a, int b)
{
    return a + b;
}
int main()
{
    print(5, 10);
    cout<<endl<<add(10, 100)<<endl;
    return 0;
}