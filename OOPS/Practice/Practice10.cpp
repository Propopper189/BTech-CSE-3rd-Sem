/*
Write a program to show difference 
between inline and non-inline member 
functions in a class.
*/

#include <iostream>
using namespace std;

class A
{
    public:
        void printIn()
        {
            cout<<"Hello In\n";
        }
        void printOut();
};

void A::printOut()
{
    cout<<"Hello Out\n";
}

int main()
{
    A a;
    a.printIn();
    a.printOut();
    return 0;
}