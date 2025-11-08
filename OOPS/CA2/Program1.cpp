#include <iostream>
using namespace std;

class Address
{
    public:
    string *city;
    string *state;
    Address(string c, string s)
    {
        city = new string(c);
        state = new string(s);
    }
    ~Address()
    {
        cout<<" "<<city[0]<<" "<<state[0];
        delete city, state;
    }
};

class Person
{
    public:
        string name;
        int age;
        Person(string name, int age)
        {
            this->name = name;
            this->age = age;
        }
};

class Employee : public Person
{
    public:
        double salary;
        Address *obj;
        Employee(string c, string s, double salary, string n, int a) : Person(n, a)
        {
            this->salary = salary;
            obj = new Address(c, s);
        }
        void print()
        {
            cout<<name<<" "<<age<<" "<<salary<<" "<<obj->city[0]<<" "<<obj->state[0];
        }
        ~Employee()
        {
            delete obj;
        }
};
int main()
{
    Employee Aquib("Jalandhar", "Punjab", 95000, "Aquib", 21);
    Aquib.print();
    return 0;
}