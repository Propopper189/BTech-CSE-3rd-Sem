// Write a program to open an existing file in append mode and add new content.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("program16.txt", ios::app);
    file << "\nHello I Am New";
    file.close();
    return 0;
}