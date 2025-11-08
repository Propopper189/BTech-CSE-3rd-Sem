#include <iostream>
using namespace std;

class Distance
{
    public: 
        int a;
        int operator >(Distance obj)
        {
            if(this->a > obj.a)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        int operator < (Distance obj)
        {
            if(this->a < obj.a)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
};
int main()
{
    Distance a, b;
    a.a = 12;
    b.a = 10;
    cout<<(a > b)<<endl;
    cout<<(a < b)<<endl;
    return 0;
}