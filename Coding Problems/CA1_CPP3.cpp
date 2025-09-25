#include <iostream>
using namespace std;

class Student
{
    public:
    int age;
    string name;
};

int main()
{
    int n;
    cout<<"Enter The Number of Objects : ";
    cin>>n;
    Student arr[n];
    int age;
    string name;
    for(int i = 0; i < n; i++)
    {
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Age : ";
        cin>>age;
        arr[i].name = name;
        arr[i].age = age;
    }  
    for(int i = 0; i < n; i++)
    {
        cout<<"Name : "<<arr[i].name<<" | Age : "<<arr[i].age<<endl;
    }  
    return 0;
}