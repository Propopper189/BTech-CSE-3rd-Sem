
#include <iostream>
using namespace std;
// void Greet(string name = "Student")
// {
//     cout<<"Hello, "<<name<<" !!"<<endl;
// }

// void Greet(int age = 18, string name) pass the default parameters at last
// {
//     cout<<"Hello, "<<name<<" !! You are "<<age<<" years old."<<endl;
// } 

void Greet(string name, int age = 21)
{
    cout<<"Hello, "<<name<<" !! You are "<<age<<" years old."<<endl;
}
int main() {
    // Write C++ code here
    // Greet();
    Greet("Aquib");
    return 0;
}