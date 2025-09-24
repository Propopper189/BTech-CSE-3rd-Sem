#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("file_handling3.txt", ios::in | ios::out | ios::trunc);
    file<<"hello world"<<endl;
    file << "Hello World"<<endl;
    file.flush(); // flushing the buffer (clearing buffer)
    file.clear(); // clearing the states of pointers
    file.seekg(0, ios::beg);
    string str1;
    getline(file, str1);
    cout<<str1<<endl;
    getline(file, str1);
    cout<<str1;
    file.close();
    return 0;
}