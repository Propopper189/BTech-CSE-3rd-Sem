#include <iostream>
using namespace std;

class ClassA
{
private:
    int a;
public:
    int b;
    void setA(int val) 
    { 
        a = val; 
    }
    friend void fun(ClassA &objA);
    void getA()
    {
        cout << "a: " << a << endl;
    }

};

void fun(ClassA &objA)
{
    objA.a = 10;
    // cout << "a: " << objA.a << endl;
    ClassA objB;
    objB.b = 20;
    cout << "b: " << objB.b << endl;
}
int main()
{
    ClassA objA;
    objA.setA(20);
    fun(objA);
    objA.getA();
    return 0;
}