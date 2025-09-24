#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("test.txt", ios::in | ios::out);
    // file << "Hello World Aquib";
    string str1;
    getline(file, str1);
    cout<<str1;
    file.close();
    return 0;
}