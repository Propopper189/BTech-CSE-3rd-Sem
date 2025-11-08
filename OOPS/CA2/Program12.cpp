#include <iostream>
using namespace std;

class Shape
{
    public:
        int a;
        void area()
        {
            cout<<"Area Shape\n";
        }
};

class Rectangle : virtual public Shape
{
    public:
        int a;
        void area()
        {
            cout<<"Area Rectangle\n";
        }
};  

class Cuboid : virtual public Rectangle
{
    public:
        int a;
        void area()
        {
            cout<<"Area Cuboid\n";
        }
};  
int main()
{
    Cuboid a;
    a.area();
    Rectangle b;
    b.area();
    Shape c;
    c.area();
    return 0;
}