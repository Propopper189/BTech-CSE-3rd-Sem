#include <iostream>
using namespace std;

class Test
{
    public:
        int *ptr;
        Test()
        {
            ptr = new int(32);
            cout<<"ptr -> "<<*ptr<<endl;
        }
        ~Test()
        {
            cout<<"Deleting ptr -> "<<*ptr<<endl;
            delete ptr;
        }
};

class A
{
    public:
        A()
        {
            cout<<"Constructor A Called\n";
        }
        virtual ~A()
        {
            cout<<"Destructor A Called\n";
        }
};

class B : public A
{
    public:
        B()
        {
            cout<<"Constructor B Called\n";
        }    
        ~B()
        {
            cout<<"Destructor B Called\n";
        }
};
int main()
{
    {
        Test t;
    }
    cout<<"Out of scope\n";
    A *ptr = new B;
    delete ptr;
    return 0;
}