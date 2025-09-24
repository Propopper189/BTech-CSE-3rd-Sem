#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("file_handling4.txt", ios::in | ios::out | ios::trunc);
    file<<"hello world"<<endl;
    file << "Hello World"<<endl;
    file.flush(); // flushing the buffer (clearing buffer)
    file.clear(); // clearing the states of pointers
    file.seekp(0, ios::beg);
    file<<"START";
    file.close();
    return 0;
}