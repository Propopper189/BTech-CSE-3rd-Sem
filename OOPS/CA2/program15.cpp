#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("program15.txt", ios::in | ios::out | ios::trunc);
    string s1;
    getline(cin, s1);
    file.write((char*) &s1, sizeof(s1));
    file.clear();
    file.flush();
    file.seekp(0, ios::beg);
    string s2;
    file.read((char*) &s2, sizeof(s1));
    cout<<s2;
    return 0;
}