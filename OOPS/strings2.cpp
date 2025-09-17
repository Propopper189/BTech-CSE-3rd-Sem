#include <iostream>
using namespace std;

int main()
{
    string str1;
    str1 = "Hello World";
    str1.append(" Lpu");
    cout<<str1<<endl;
    str1.insert(3, " ABC");
    cout<<str1<<endl;
    str1.replace(3, 7, " abc");
    cout<<str1<<endl;
    str1.erase(3, 7);
    cout<<str1<<endl;
    str1.clear(); // Clears the entire string
    cout<<str1<<endl;
    return 0;
}