#include <iostream>
using namespace std;

class Test
{
    public:
        int a;
        Test()
        {
            cin>>a;
        }
        void operator ++()
        {
            a--;
            cout<<a<<endl;
        }
        void operator ++(int)
        {
            a++;
            cout<<a<<endl;
        }
        
};
int main()
{
    Test obj;
    ++obj;
    obj++;
    return 0;
}