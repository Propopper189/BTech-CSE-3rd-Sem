#include <iostream>
using namespace std;

class Person
{
    public:
        void print()
        {
            cout<<"Person\n";
        }
};

class Employee : virtual public Person
{
    public:
        void print()
        {
            cout<<"Employee\n";
        }
};

class Manager : virtual public Employee
{
    public:
        void print()
        {
            cout<<"Manager\n";
        }
};

class GeneralManager : virtual public Employee, virtual public Manager
{
    public:
        void print()
        {
            cout<<"General Manager\n";
        }
};
int main()
{
    GeneralManager a;
    Person p;
    p.print();
    a.print();
    return 0;
}