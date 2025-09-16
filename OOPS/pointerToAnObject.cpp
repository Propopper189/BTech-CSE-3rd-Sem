#include <iostream>
using namespace std;

class Test
{
    public:
        int x;
        void getX()
        {
            cout<<x<<endl;
        }
};

int main()
{
    Test *ptr, t1;
    ptr = &t1;
    t1.x = 10;
    (*ptr).x = 56;
    (*ptr).getX();
    cout<<(*ptr).x<<endl;
    // or use arrow operator
    ptr->getX(); // same as (*ptr).getX();
    return 0;
}