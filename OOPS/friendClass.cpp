#include <iostream>
using namespace std;    

class classA
{
private:
    int a;  
public:
    int b;
    void setA(int val) 
    { 
        a = val; 
    }
    friend class classB; // declaring classB as friend class
    void getA()
    {
        cout << "a: " << a << endl;
    }
};

class classB
{
    public:
    classA objA;
    void setValue()
    {
        objA.a = 10; // accessing private member of classA
        objA.b = 20; // accessing public member of classA
    }
    void getValue()
    {
        cout << "a: " << objA.a << endl;
        cout << "b: " << objA.b << endl;
    }
};
int main()
{
    classB objB;
    objB.setValue();
    objB.getValue();
    return 0;
}