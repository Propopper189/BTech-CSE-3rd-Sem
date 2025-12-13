/*
Create a function template findMax() 
that works for int, float, char.
*/

#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b)
{
    if(a > b)
    {
        return a;
    }
    return b;
}

int main()
{
    float a, b;
    cin>>a>>b;
    cout<<findMax(a, b);
    return 0;
}