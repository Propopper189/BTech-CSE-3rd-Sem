#include <iostream>
#include <exception>
using namespace std;
int main()
{
    try
    {
        // int *arr = new int[10000000000000000];
        throw logic_error("test error");
    }catch(bad_alloc &err)
    {
        cout<<err.what();
    }
    cout<<"\nProgram executed!"<<endl;
    return 0;
}