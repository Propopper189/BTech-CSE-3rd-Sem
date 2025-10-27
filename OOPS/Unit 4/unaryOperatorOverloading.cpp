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
        void operator ++() //preIncrement of object of type of type Test
        {
            x += 3;
        }
        void operator ++(int) //postIncrement of object of type Test
        {
            x += 10;
        }
};
int main()
{
    Test obj1(4);
    obj1++;
    cout<<obj1.x<<endl;
    return 0;
}