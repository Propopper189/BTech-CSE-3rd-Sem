#include <iostream>
using namespace std;

class Calc
{
    public:
    int a, b;
    void sub();
    void add();
};

void Calc::add()
{
    cout << "Addition is: " << a + b << endl;
}


int main()
{
    Calc c;
    c.a = 10;
    cin>>c.a;
    c.b = 20;
    c.add();
    return 0;
}