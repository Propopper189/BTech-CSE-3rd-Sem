#include <iostream>
using namespace std;

// Always better to use virtual when deriving class into another

class X
{
    public:
        void print()
        {
            cout<<"Hi\n";
        }
};

class A : virtual public X
{

};

class B : virtual public X
{

};

class C : public A, public B
{
    public:

};
int main()
{   
    C obj;
    obj.print();
    return 0;
}