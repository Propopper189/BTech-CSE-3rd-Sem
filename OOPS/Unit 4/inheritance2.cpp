#include <iostream>
using namespace std;

class A
{
    public:
        int x;
        A(int a) : x(a) {}
        void printA()
        {
            cout<<x<<endl;
        }
};

class B : public A
{
    public: 
    int y;
    B(int y) : A(y){}
    void printB()
    {
        cout<<y<<" "<<x<<endl;
    }
};
int main()
{
    B b(10); b.y = 20;
    b.printA(); b.printB();
    return 0;
}