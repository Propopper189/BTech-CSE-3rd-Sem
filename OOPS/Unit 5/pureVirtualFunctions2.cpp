#include <iostream>
using namespace std;

class LivingThings
{
    public:
        virtual void abstract(string s, int t) = 0;
        string name;
        int tail;
};

class Animal : public LivingThings
{
    public:
        void abstract(string s, int t)
        {
            name = s;
            tail = t;
        }
};
int main()
{
    LivingThings *Dog = new Animal;
    Dog->abstract("Dog", 1);
    Animal A;
    return 0;
}