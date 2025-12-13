/*
Create a structure Point with x, y coordinates. 
Write a function inside the structure to calculate 
distance between two points.
*/

#include <iostream>
#include <cmath>
using namespace std;

struct Point
{
    int x, y;
    Point()
    {
        cin>>x>>y;
    }
    float calc(Point b)
    {
        return sqrt((b.x - x)*(b.x - x) + ((b.y - y) * (b.y - y)));
    }
};
int main()
{
    Point a, b;
    cout<<a.calc(b);
    return 0;
}