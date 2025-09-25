#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("file_handling9_binary.bin", ios::in | ios::out | ios::binary);
    int a = 20;
    file.write(reinterpret_cast<char*>(&a), sizeof(a));
    file.flush();
    file.clear();
    file.seekg(0, ios::beg);
    int j = 30;
    file.read((char*) &j, sizeof(int));
    cout<<"Recovered Value Of J : "<<j<<endl;

    return 0;
}