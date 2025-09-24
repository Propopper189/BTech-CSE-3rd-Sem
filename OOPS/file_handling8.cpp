#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("file_handling8.txt", ios::in | ios::out | ios::trunc);
    file << "Hello World"<<endl;
    file << "Hello LPU!"<<endl;
    file.flush();
    file.clear();
    string str1, str2 , str3, str4;
    // sequential access
    file.seekg(0, ios::beg);
    file >> str1 >> str2 >> str3 >> str4;
    cout<< str1 << endl << str2 << endl << str3 << endl << str4 << endl;
    // random access
    file.seekg(6, ios::beg);
    file >> str1;
    cout<<str1;
    return 0;
}