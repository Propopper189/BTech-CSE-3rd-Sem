#include <iostream>
using namespace std;

class Test
{
    public:
        int x;
        Test(int x)
        {
            this->x = x;
        }
        Test operator +(Test obj)
        {
            return Test(x + obj.x);
        }
        void operator +(int y)// works as a function
        {
            cout << x - y << endl;
        }
};
int main()
{
    Test obj1(4), obj2(5);
    // obj1.x = 5;
    // obj2.x = 3;
    Test obj3 = obj1 + obj2;
    cout << obj3.x << endl;
    obj1 + 2;
    return 0;
}