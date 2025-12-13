/*
Create two classes A and B. Define a 
friend function maxValue() that returns the 
larger private data member.
*/

#include <iostream>
using namespace std;

class B;

class A
{
    int a;
    public:
        A()
        {
            cin>>a;
        }
        friend int maxValue(A, B);
};  

class B
{
    int a;
    public:
        B()
        {
            cin>>a;
        }
        friend int maxValue(A, B);
};

int maxValue(A a, B b)
{
    if(a.a > b.a)
    {
        return a.a;
    }
    else
    {
        return b.a;
    }
}
int main()
{

    return 0;
}