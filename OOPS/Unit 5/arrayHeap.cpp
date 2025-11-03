#include <iostream>
using namespace std;

class Test
{
    public:

};

int main()
{
    int *ptr = new int[10];
    for(int i = 0; i < 10; i++)
    {
        ptr[i] = i + 1;
        cout<<ptr[i]<<" ";
    }
    Test *obj = new Test[10];
    delete [] ptr;
    delete [] obj;
    return 0;
}