#include <iostream>
using namespace std;

class Test
{
    public:
        string name;
        int age;
        Test(string name, int age)
        {
            this->name = name;
            this->age = age;
        }
};
int main()
{
    Test t1("Aquib", 20);
    cout<<t1.name<<" "<<t1.age;
    return 0;
}