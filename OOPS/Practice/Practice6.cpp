#include <iostream>
#include <iomanip>
using namespace std;

class A
{
    public:
        int x;
        A(int x)
        {
            this->x = x;
            cout<<x<<endl;
        }
        operator int()
        {
            return x * 3;
        }
        operator double()
        {
            return (double)x + 0.1;
        }
};

int main()
{
    char a = 65;
    cout<<a<<endl;
    A obj = 10;
    int l = obj;
    double j = obj;
    cout<<setw(10)<<setfill('*')<<l<<" "<<j<<endl;
    return 0;
}