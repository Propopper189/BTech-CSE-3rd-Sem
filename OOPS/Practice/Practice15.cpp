/*
Write a program to overload 
++ (prefix and postfix) for a class Counter.
*/

#include <iostream>
using namespace std;

class A
{
    public:
        int a;
        A(int a)
        {
            this->a = a;
        }
        void operator++()
        {
            a++;
            cout<<a<<endl;
        }
        void operator ++(int)
        {
            a++;
            cout<<a<<endl;
        }
};
int main()
{
    A a(12);
    ++a;
    a++;
    return 0;
}