#include <iostream>
#include <string>
using namespace std;

int main()
{
    // strings are class in C++
    //         and 
    // these are the ways to define strings 
    string str1;
    str1 = "Hello World";
    string str2 = str1;
    string str3("Hello LPU!!");
    string *newNode = new string("Aquib");
    cout<<(*newNode);
    string str4;
    cout<<endl<<str1.length()<<" "<<str1.size();
    cout<<endl<<str1.empty()<<" "<<str4.empty();
    cout<<endl<<str1.substr(0, 11);
    cout<<endl<<str1.find('W'); // prints the index of the first character in the sustring
    return 0;
}