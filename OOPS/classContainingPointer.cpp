#include <iostream>
using namespace std;

class Test
{
    public:
        int *ptr;
};

int main()
{
    Test t1;
    int a = 10;
    t1.ptr = &a;
    cout<<t1.ptr<<" "<<&a<<" "<<(*t1.ptr);
    return 0;
}