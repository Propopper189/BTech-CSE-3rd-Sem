#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout<<"Sum of two integers: "<<a+b<<endl;
}

void add(float a, float b)
{
    cout<<"Sum of two floats: "<<a+b<<endl;
}

void add(int a, int b, int c)
{
    cout<<"Sum of three integers: "<<a + b + c<<endl;
}
int main()
{
    float a = 10.22;
    float b = 10.19;
    add(5, 10);        // Calls the function with integer parameters
    add(a, b);
    add(10, 20, 30);   // Calls the function with three integer parameters
    return 0;

}
