/*
Write a program to demonstrate 
try–catch–throw for division.
*/

#include <iostream>
using namespace std;

void divide(int a, int b)
{
    try
    {
        if(b <= 0)
        {
            throw "Divisor is zero or negative\n";
        }
        cout<<"Result : "<<a/b<<endl;
    }
    catch(const char *s)
    {
        throw;
    }
}
int main()
{
    int a, b;
    try
    {
        cin>>a>>b;
        divide(a, b);
    }
    catch(const char *s)
    {
        cout<<"Catched in main()\n";
        cout<<s;
    }
    return 0;
}