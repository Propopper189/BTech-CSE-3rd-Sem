#include <iostream>
using namespace std;

#define pi 3.14
class Shape
{
    public:
        virtual void area() = 0;
};

class Circle : public Shape
{
    public:
        double radius;
        double a;
        void area()
        {
            a = pi*radius*radius;
            cout<<"Area of circle "<<a<<endl;
        }
        Circle(double r)
        {
            radius = r;
        }
};

class Rectangle : public Shape
{
    public:
        double a;
        double length;
        double breadth;
        void area()
        {
            a = length * breadth;
            cout<<"Area of rectangle: "<<a<<endl;
        }
        Rectangle(double l, double b)
        {
            length = l;
            breadth = b;
        }
};


int main()
{
    Shape *R[2];
    Shape *C[2];
    // R[0] = new Rectangle(2, 3);
    // C[0] = new Circle(3);
    // R[1] = new Rectangle(1, 2);
    // C[1] = new Circle(2);
    // R[0]->area();
    // C[0]->area();
    // R[1]->area();
    // C[1]->area();
    for(int i = 0; i < 2; i++)
    {
        int l, b;
        cin>>l>>b;
        R[i] = new Rectangle(l, b);
        double r;
        cin>>r;
        C[i] = new Circle(r);
    }
    for(int i = 0; i < 2; i++)
    {
        R[i]->area();
        C[i]->area();
    }
    return 0;
}