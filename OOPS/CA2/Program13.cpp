#include <iostream>
using namespace std;

class Base
{
    public:
        void show()
        {
            cout<<"Base\n";
        }
};

class Child : public Base
{
    public:
        void show()
        {
            Base::show();
            cout<<"Child\n";
        }
};  
int main()
{
    Child a;
    a.show();
    return 0;
}