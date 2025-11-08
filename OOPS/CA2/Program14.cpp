// Write a program to create a text file and write user input into it.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream file1;
    file1.open("program14.txt");
    file1 << "Hello World";
    file1.close();
    ifstream file2;
    file2.open("program14.txt");
    string s1;
    getline(file2, s1);
    cout<<s1;
    return 0;
}