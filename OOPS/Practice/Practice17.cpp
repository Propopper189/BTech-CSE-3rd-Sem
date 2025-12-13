/*
Create an abstract class 
Shape with pure virtual area(). Derive Circle and Rectangle.
*/

#include <iostream>
using namespace std;

class Shape
{
    public:
        int a, b;
        double r;
        virtual void area() = 0;
};

class Circle : public Shape
{
    public:
        Circle()
        {
            cout<<"Enter radius for circle : ";
            cin>>r;
        }
        void area()
        {
            cout<<"Circle : "<<3.14*r*r<<endl;
        }
}; 

class Rectangle : public Shape
{
    public:
        Rectangle()
        {
            cout<<"Enter side of the rectangle : ";
            cin>>a>>b;
        }
        void area()
        {
            cout<<"Rectangle : "<<a*b<<endl;
        }
};
int main()
{
    Circle a;
    a.area();
    Rectangle r;
    r.area();
    return 0;
}