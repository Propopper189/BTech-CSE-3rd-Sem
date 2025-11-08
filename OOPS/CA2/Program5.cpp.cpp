#include <iostream>
using namespace std;

class Complex
{
    public:
        int a;
        // int b;
        void operator+(int b)
        {
            a = 12;
            cout<<a-b;
        }
};
int main()
{
    Complex a;
    a + 1;
    return 0;
}