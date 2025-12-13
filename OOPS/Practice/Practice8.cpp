/*
Define a class Student with roll and name. 
Add an inline function to print details and a static 
function to count number of objects. Write main() to test it.
*/

#include <iostream>
using namespace std;

class Student
{
    public:
        int roll;
        string name;
        static int count;
        Student()
        {
            cin>>name>>roll;
            count++;
        }
        inline void print()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Roll: "<<roll<<endl;
        }
        static void showCount()
        {
            cout<<"Count: "<<count<<endl;
        }
};
int Student::count = 0;
int main()
{
    Student a, b;
    a.print();
    a.showCount();
    return 0;
}