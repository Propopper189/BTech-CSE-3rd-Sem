#include <iostream>
using namespace std;

class Base
{
    public:
        virtual void display()
        {
            cout<<"Base\n";
        }
};

class Child : public Base
{
    public:
        void display() override
        {
            cout<<"Child\n";
        }
};

int main()
{
    Base *ptr;
    Child obj;
    ptr = &obj;
    ptr->display();
    return 0;
}