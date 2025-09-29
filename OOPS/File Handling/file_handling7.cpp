#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("file_handling7.txt", ios::in | ios::out | ios::ate);
    file << "Hello World"<<endl;
    file << "Hello LPU"<<endl;
    file.flush();
    file.clear();
    file.seekp(0, ios::beg);
    file << "START";
    cout<<"Current position of GET pointer : " << file.tellg();
    file.close();
    return 0;
}