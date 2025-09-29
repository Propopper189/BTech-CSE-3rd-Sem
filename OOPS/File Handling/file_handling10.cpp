#include <iostream>
#include <fstream>
using namespace std;

class Test
{
    public:
        char name[50];
        int age;
};

int main()
{
    fstream file;
    Test t1 = {"Aquib", 21}, t2 = {"Jawaid", 23}, t3 = {"Ansari", 24};
    file.open("file_handling10.bin", ios::in | ios::out | ios::trunc | ios::binary);
    file.write((char*) &t1, sizeof(Test));
    file.write((char*) &t2, sizeof(Test));
    file.write((char*) &t3, sizeof(Test));
    file.flush();
    file.clear();
    file.seekg(sizeof(Test), ios::beg);
    file.read((char*) &t3, sizeof(Test));
    cout<<"Name : "<<t3.name<<" Age : "<<t3.age<<endl;
    return 0;
}