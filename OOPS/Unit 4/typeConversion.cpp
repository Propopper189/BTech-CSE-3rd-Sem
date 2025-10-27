#include <iostream>
using namespace std;

class Test
{
    public:
        int x;
        Test(int a)
        {
            this->x = a;
        } // Same as 
        // Test (int a) : x(a) {}
        operator int()
        {
            return x+10;
        }
};
int main()
{
    Test t = 100, obj2 = 23;
    int a = t;
    int b = obj2;
    cout<<a<<endl;
    return 0;
}