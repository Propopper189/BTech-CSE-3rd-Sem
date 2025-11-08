#include <iostream>
using namespace std;

class Shape
{
    public:
        virtual void area()
        {
            cout<<"Shape\n";
        }
};

class Circle : public Shape
{
    public:
        void area () override
        {
            cout<<"Circle\n";
        }
};

class Rectangle : public Shape
{
    public:
        void area() override
        {
            cout<<"Rectangle\n";
        }
};
int main()
{
    Shape a;
    a.area();
    Circle b;
    b.area();
    Rectangle c;
    c.area();
    return 0;
}