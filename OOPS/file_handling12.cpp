#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    int a = 29, c;
    file.open("file_handling12.bin", ios::in | ios::out | ios::trunc | ios::binary);
    file.write((char*) &a, sizeof(int));
    file.flush();
    file.clear();
    file.seekg(0, ios::beg);
    file.read((char*) &c, sizeof(int));
    cout<<c<<endl;
    return 0;
}