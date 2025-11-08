#include <iostream>
using namespace std;

class Class1
{
    public:
        void show()
        {
            cout<<"Class1\n";
        }
};

class Class2 : public Class1
{
    public:
        void show()
        {
            cout<<"Class2\n";
        }
};
int main()
{
    Class1 *ptr1;
    ptr1 = new Class1;
    ptr1->show();
    Class2 *ptr2 = new Class2;
    ptr2->show();
    return 0;
}