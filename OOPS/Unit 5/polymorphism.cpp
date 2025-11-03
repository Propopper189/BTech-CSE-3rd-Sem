#include <iostream>
using namespace std;

class Base
{
    public:
        virtual void print()
        {
            cout<<"Print A\n";
        }
};
class Child1 : public Base
{
    public:
        void print() override
        {
            cout<<"Print B\n";
        }
};

class Child2 : public Base
{
    public:
        void print() override
        {
            cout<<"Print C\n";
        }
};

int main()
{
    Base *ptr = new Child2;
    ptr->print();
    return 0;
}