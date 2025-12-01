#include <iostream>
using namespace std;

void divide(int a, int b)
{
    try
    {
        if(b == 0)
        {
            throw logic_error("Division by 0");
        }
        if(b < 0)
        {
            throw b;
        }
        cout<<a/b<<endl;
    }
    catch(logic_error &err)
    {
        throw;
    }
    catch(int c)
    {
        c = b * -1;
        cout<<a/c<<endl;
    }
}
int main()
{
    int a, b;
    cin>>a>>b;
    try
    {
        divide(a, b);
    }
    catch(exception &err)
    {
        cout<<err.what()<<endl;
    }
    cout<<"Program executed!";
    return 0;
}