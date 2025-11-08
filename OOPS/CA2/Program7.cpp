#include <iostream>
using namespace std;

class Test
{
    public:
        float a;
        Test(float a)
        {
            this->a = a;
        }
        operator float()
        {
            return a;
        }
};
int main()
{
    Test a(12.12);
    float b = a;
    cout<<b;
    return 0;
}