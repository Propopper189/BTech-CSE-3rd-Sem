#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Student
{
    public:
        int age;
        string name;
};
int main()
{
    Student s1, s2;
    cout<<"Enter Name : ";
    getline(cin, s1.name);
    cout<<"Enter Age : ";
    cin>>s1.age;
    fstream file;
    file.open("file_handling13.bin", ios::in | ios::out | ios::binary);
    file.write((char*) &s1, sizeof(Student));
    file.flush();
    file.clear();
    file.seekg(0, ios::beg);
    file.read((char*) (&s2), sizeof(Student));
    cout<<"Name : "<<s2.name<<" Age : "<<s2.age<<endl;
    return 0;
}