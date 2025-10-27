#include <iostream>
using namespace std;

class person
{
    public:
        string name;
        int age;
        person(string n, int a)
        {
            cout<<"Person class constructor\n";
            this->name = n;
            this->age = a;
        }
        void printperson()
        {
            cout<<name<<" "<<age<<endl;
        }
    };
    
    class student : public person
    {
        public:
        string course;
        float gpa;
        student(string n, int a, string c, float g) : person(n, a)
        {
            cout<<"Student class constructor\n";
            course = c;
            gpa = g;
        }
        void printStudent()
        {
            cout<<name<<" "<<age<<endl;
            cout<<course<<" "<<gpa<<endl;
        }
};

int main()
{
    student obj1("Raj", 32, "B.Tech CSE", 9.1);
    // obj1.name = "Raj";
    // obj1.age = 21;
    // obj1.course = "B.Tech CSE";
    // obj1.gpa = 9.1;
    obj1.printStudent();
    // cout<<obj1.name<<endl<<obj1.age<<endl<<obj1.course<<endl<<obj1.gpa<<endl;
    return 0;
}