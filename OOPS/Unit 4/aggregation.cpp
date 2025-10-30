#include <iostream>
using namespace std;

class engine
{

};

class person
{

};

class car
{
    public:
        engine *en; //composition (cannot exist without car) {has a relation}
        person driver; // aggregation (can exist without car) {has a relation}
        car(person p)
        {
            en = new engine;
            driver = p;
        }
};
int main()
{
    person p;
    car objC(p);
    return 0;
}