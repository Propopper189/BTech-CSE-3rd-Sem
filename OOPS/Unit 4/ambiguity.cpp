#include <iostream>
using namespace std;

class A
{
    public:
        void print()
        {
            cout<<"Hello\n";
        }
};

class B
{
    public:
        void print()
        {
            cout<<"Hi\n";
        }
};

class C : public A, public B
{
    public:
        void print()
        {
            A::print();
            B::print();
        }
};
int main()
{
    C obj;
    obj.print();
    // obj.A::print();
    // obj.B::print();
    return 0;
}