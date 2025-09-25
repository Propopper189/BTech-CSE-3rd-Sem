#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    // int a = 10;
    // char b = 'b';
    file.open("file_handling11.bin", ios::out | ios::in | ios::binary);
    // file.write((char*) &a, sizeof(a));
    // file.write((char*) &b, sizeof(b));
    // file.flush();
    // file.clear();
    file.seekg(0, ios::beg);
    int c = 1000;
    file.read((char*) &c, sizeof(c));
    char d = 'D';
    file.read((char*) &d, sizeof(d));
    cout<<c<<" "<<d<<endl;
    return 0;
}