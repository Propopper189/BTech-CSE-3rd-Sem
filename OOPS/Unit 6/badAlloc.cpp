#include <iostream>
#include <exception>
using namespace std;

int divide(int a, int b)
{
        try
        {
            if(b == 0)
            {
                throw logic_error("Zero\n");
            }
            return a/b;
        }
        catch(...)
        {
            cout<<"something went wrong\n";
            throw;
        }
}
int main()
{
    // try
    // {
    //     // int *arr = new int[10000000000000000];
    //     throw logic_error("test error");
    // }catch(bad_alloc &err)
    // {
    //     cout<<err.what();
    // }
    int a, b;
    cin>>a>>b;
    try
    {
        cout<<divide(a, b)<<endl;
    }
    catch(exception &err)
    {
        cout<<"Error: "<<err.what()<<endl;
    }
    cout<<"\nProgram executed!"<<endl;
    return 0;
}