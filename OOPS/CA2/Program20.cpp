// Write a program to copy content from one file to another using ifstream and ofstream.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file;
    string s1;
    file.open("program20.cpp");
    ofstream file2;
    file2.open("program20.txt");
    while(getline(file, s1))
    {
        file2 << s1;
        file2 << endl;
    }
    file.close();
    file2.close();
    return 0;
}