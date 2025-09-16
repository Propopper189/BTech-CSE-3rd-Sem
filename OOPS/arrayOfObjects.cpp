#include <iostream>
using namespace std;

class Student
{
    public:
        int roll;
        string name;
        void setValues()
        {
            cin>>roll;
            cin>>name;
        }
        void getValues()
        {
            cout<<"Name : "<<name<<" | Roll : "<<roll<<endl;
        }
    };

int main()
{
    Student arr[3];
    for(int i = 0; i < 3; i++)
    {
        arr[i].setValues();
    }
    for(int i = 0; i < 3; i++)
    {
        arr[i].getValues();
    }
    return 0;
}