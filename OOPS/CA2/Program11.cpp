#include <iostream>
using namespace std;
class Student
{
    public:
        int a;
        void show()
        {
            cin>>a;
            cout<<"Student "<<a<<endl;
        }
};

class Exam : virtual public Student
{
    public:
        int a;
        void show()
        {
            cin>>a;
            cout<<"Exam "<<a<<endl;
        }
};

class Result : virtual public Exam
{
    public:
        int a;
        void show()
        {
            cin>>a;
            cout<<"Result "<<a<<endl;
        }
};

int main()
{
    Result a;
    a.show();
    Exam b;
    b.show();
    Student c;
    c.show();
    return 0;
}