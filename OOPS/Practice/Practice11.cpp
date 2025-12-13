/*
Overload a function area() 
for square, rectangle, and circle.
*/

#include <iostream>
#include <cmath>
using namespace std;

int area(int a)
{
    return a * a;
}

int area(int a, int b)
{
    return a * b;
}

double area(double r)
{
    return M_PI * r * r;
}
int main()
{
    
    return 0;
}