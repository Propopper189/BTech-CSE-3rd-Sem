#include <iostream>
using namespace std;

class Test
{
    public:
    int xyz;
    static int count;
};

int Test::count = 99;

int main()
{
    Test t1, t2;
    t1.xyz = 10;
    cin>>t1.xyz;
    t2.xyz = 15;
    cout<<t1.xyz<<" "<<t2.xyz<<endl;
    cout<<t1.count<<" "<<t2.count<<endl;
    
    return 0;
}