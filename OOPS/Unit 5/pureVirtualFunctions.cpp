#include <iostream>
using namespace std;

class Base // Abstract class
{
    public:
        virtual void print() = 0;
        int a;
};

class Derived : public Base
{
    public:
        void print()
        {
            cout<<"Hi\n";
            a = 12;
            cout<<a;
        }
};
int main()
{
    Base *ptr = new Derived;
    ptr->print();
// Base k; (Not possible) means you cannot directly create obj of abstract class
    return 0;
}