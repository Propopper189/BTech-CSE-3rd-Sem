#include <iostream>
using namespace std;

int main()
{  
    int age;
    cin>>age;
    try
    {
        if(age < 18 && age >= 0)
        {
            throw age;
        }
        if(age == 18)
        {
            throw "Ready to vote\n";
        }
        if(age > 18)
        {
            string st = "Age is greater than 18";
            throw st;
        }
        if(age < 0)
        {
            throw bool(false);
        }
        // cout<<"Age: "<<age<<endl;
    }
    catch(const int a)
    {
        cout<<"Error: "<<a<<" is less than 18"<<endl;
    }
    catch(const char *a)
    {
        cout<<a;
    }
    catch(string &a)
    {
        cout<<a<<endl;
    }
    catch(...)
    {
        cout<<"Default catch block\n";
    }
    cout<<"Program executed successfully\n";
    return 0;
}