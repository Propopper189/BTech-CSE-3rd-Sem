#include <iostream>
using namespace std;

class Test
{
    public:
        int x, y;
        Test setValues(int x, int y)
        {
            this->x = x; // this pointer only exist in member fuctions
            this->y = y;
            return *this;
        }
        void getValues()
        {
            cout<<(*this).x<<" "<<(*this).y<<endl;
        }
        Test add()
        {
            cout<<"Add : "<<x+y<<endl;
            return *this;
        }
        Test sub()
        {
            cout<<"Sub : "<<x - y<<endl;
            return *this;
        }
};

int main()
{
    Test t1;
    t1.setValues(12, 20);   
    t1.getValues(); 
    Test t2, t3;
    t3 = t2.setValues(200, 100).add().sub();
    t2.getValues();
    t3.getValues();
    return 0;
}