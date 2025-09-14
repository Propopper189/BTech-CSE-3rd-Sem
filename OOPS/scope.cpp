#include <iostream>
using namespace std;

class classA
{
    private:
        int a;
    public:
    classA()
    {
        cout<<"Hello Constructor"<<endl;
    }
    ~classA()
    {
        cout<<"Hello Destructor"<<endl;
    }
        int b;
        void setA(int x)
        {
            a = x;
        }
        void getA()
        {
            cout<<"Value of a: "<<a<<endl;
        }
};
int main()
{
    {
    classA objA;
    objA.b = 20; // Allowed, b is public
    objA.setA(10); // Allowed, setA is public
    objA.getA(); // Allowed, getA is public
    // objA.a = 30; // Not allowed, a is private
    cout<<"Value of b: "<<objA.b<<endl;
    }
    cout<<"End of main function"<<endl;
    return 0;
}