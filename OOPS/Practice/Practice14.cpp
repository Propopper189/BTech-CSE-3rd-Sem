/*
Create a class Time (hr, min). 
Overload int() to convert Time to total minutes.
*/
#include <iostream>
using namespace std;

class Time
{
    public:
    int h, m;
        Time(int hr, int min)
        {
            h = hr;
            m = min;
        }
        operator int()
        {
            return (h*60) + m;
        }
};
int main()
{
    Time t(2, 10);
    int tem = t;
    cout<<tem<<endl;
    return 0;
}