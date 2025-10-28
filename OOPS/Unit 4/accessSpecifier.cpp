#include <iostream>
using namespace std;

// public: members can be accessed from anywhere
// protected: members can be accessed inside the class and by derived (child) classes
// private: members can only be accessed inside the class itself

class A
{
protected:
    // Can be accessed inside this class and its derived classes
    int z;
public:
    int x;
    A(int y) : x(y) {}
    void printA()
    {
        cout << x << endl;
    }
};

class B : public A 
/* class B : private A  --> (alternative)
   In this case, members of A will become private in B
   and cannot be accessed through B objects. */
{
public:
    int y;
    B(int a) : A(a)  // calls base class constructor A(int y)
    {
        y = 99;
        z = 10;  // valid: z is protected in A
    }
    void printB()
    {
        cout << x << " " << y << " " << z;
    }
};

int main()
{
    B b(100);
    // b.x = 80; // valid: x is public in A
    b.printB();
    return 0;
}
