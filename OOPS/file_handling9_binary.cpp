#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("file_handling9_binary.bin", ios::in | ios::out | ios::binary);
    short a = 20;
    file.write(reinterpret_cast<char*>(&a), sizeof(a));
    return 0;
}