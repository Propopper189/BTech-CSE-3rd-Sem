#include <iostream>
using namespace std;

class myError
{
    public:
        string err;
        myError(string str)
        {
            err = str;
        }
};
void divide(int a, int b)
{
    try
    {
        if(b == 0)
        {
            myError obj("Division by 0");
            // throw logic_error("Division by 0");
            throw obj;
        }
        if(b < 0)
        {
            throw b;
        }
        cout<<a/b<<endl;
    }       
    catch(myError &err)
    {
        throw;
    }
    catch(int i)
    {
        i = i * -1;
        cout<<a/b<<endl;
    }
}
int main()
{
    try
    {
        int a, b;
        cin>>a>>b;
        divide(a, b);
    }
    catch(myError &err)
    {
        cout<<err.err<<endl;
    }
    catch(exception &err)
    {
        cout<<err.what()<<endl;
    }
    return 0;
}