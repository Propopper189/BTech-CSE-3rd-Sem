#include <iostream>
using namespace std;

// Create abstract class Shape with virtual 
// function area().
// Create classes Circle, Rectangle, and Drawing.
// Tasks: 
// Drawing class should aggregate multiple Shape* objects
// (like a collection of shapes).
// Use runtime polymorphism to compute total area of all shapes.
// Demonstrate early and late binding by calling normal and virtual
// functions

class Shape
{
    public:
        virtual void area() = 0;
        int l, b;
        double r;
};
class Circle : public Shape
{
    public:
    Circle()
    {
        cin>>r;
    }
    void area()
    {
        cout<<"Area of circle: "<<3.14*r*r<<endl;
    }
};

class Rectangle : public Shape
{
    public:
    Rectangle()
    {
        cin>>l>>b;
    }
    void area()
    {
        cout<<"Area of rectangle: "<<l*b<<endl;
    }
};

class Drawing : public Shape
{
    public:
        Shape *rect;
        Shape *cir;
    void area()
    {
        rect = new Rectangle;
        cir = new Circle;
        rect->area();
        cir->area(); 
    }
};
int main()
{
    Drawing a;
    a.area();
    return 0;
}