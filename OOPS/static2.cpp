#include <iostream>
using namespace std;

class Test
{
    public:
        int xyz;
        static int count;

        static void func() 
        // static member function which can access only static 
        // data members and can be accessed without object
        {
           cout<<"Count : " <<count<<endl; 
        }
};
//IMPORTANT :  bottom up approach means small problems are solved first
// and then the big problem is solved using small problems
void hello(int &b)
{
    b++;
}
int Test::count = 1;

int main()
{   
    Test t1;
    t1.xyz = 10;
    t1.func();
    t1.count += t1.count ;
    t1.func();
    int a = 5;
    hello(a);
    cout<<a<<endl;
    return 0;
}