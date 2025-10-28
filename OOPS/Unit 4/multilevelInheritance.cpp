#include <iostream>
using namespace std;

class Person
{
    public:
        string name;
        int age;
        Person(string n, int a)
        {
            name = n;
            age = a;
        }
};
class Student : public Person
{
    public:
        int roll;
        float GPA;
        string course, university;
        Student(string n, int a, int r, float g, string c, string u) : Person(n, a)
        {
            roll = r;
            GPA = g;
            course = c;
            university = u;
        }
        void printStudent()
        {
            cout<<name<<" "<<age<<endl;
            cout<<roll<<endl<<course<<" "<<university<<endl;
        }
};

class Intern : public Student
{
    private:
        double CTC;
        int id;
    public:
        string company, jobProfile;
        Intern(string n, int a, int r, float g, string c, string u, double ct, int id, string com, string job) : Student(n, a, r, g, c, u)
        {
            CTC = ct;
            this->id = id;
            company = com;
            jobProfile = job;
        }
        void printIntern()
        {
            cout<<name<<" "<<age<<endl<<roll<<" "<<GPA<<" "<<endl<<course<<" "<<university<<" "<<endl;
            cout<<CTC<<" "<<id<<" "<<endl;
            cout<<company<<" "<<jobProfile<<endl;
        }
};

class Research 
{
    public: 
        string domain;
};

class Teacher : public Person, public Research
{
    public:
        string department;
        Teacher(string n, int a, string dep, string dom) : Person(n, a)
        {
            department = dep;
            domain = dom;
        }
        void printTeacher()
        {
            cout<<name<<" "<<age<<" "<<endl<<department<<" "<<domain<<endl;
        }
};
int main()
{
    Teacher chetanSir("Chetan Singh", 23, "CSE", "Networks");
    chetanSir.printTeacher();
    cout<<endl<<endl;
    Student Aquib("Aquib Jawaid", 21, 28, 8.6, "Btech CSE", "Lovely Professional University");
    Aquib.printStudent();
    cout<<endl<<endl;
    Intern Raj("Raj", 21, 28, 8.6, "Btech CSE", "Lovely Professional University", 9.8, 102, "TCS", "SDE");
    Raj.printIntern();
    cout<<endl<<endl;
    return 0;
}