#include <iostream>
using namespace std;

class Test
{
    public:
        int x;
        Test(int a)
        {
            x = a;
        }
        int add(Test obj)
        {
            return x + obj.x;
        }
        int operator +(Test c)
        {
            return x + c.x;
        }
        int operator +(int c)
        {
            return x + c;
        }
        void operator ++()
        {
            x += 5;
        }
};

int operator +(int a, Test obj)
{
    return a + obj.x;
}
int main()
{
    int a = 10, b = 20;
    double c = 29.02;
    cout<< a + b<<endl;
    cout<< a + c<<endl;
    Test t1(23), t2(98);
    cout<<"Function: "<<t1.add(t2)<<endl;
    cout<<"Operator Overloading: "<<t1 + t2<<endl;
    cout<<"Operator Overloading: (Test + int): "<<t1 + 10<<endl;
    cout<<"Operator Overloading (int + Test): "<<10 + t1<<endl;
    cout<<t1.x<<endl;
    ++t1;
    cout<<t1.x<<endl;
    return 0;
}