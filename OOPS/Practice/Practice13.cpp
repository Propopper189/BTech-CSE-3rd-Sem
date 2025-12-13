/*
Create a file, write 3 lines to it, 
then reopen and display its contents.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("Practice13.txt", ios::in | ios::out | ios::trunc | ios::binary);
    string a;
    for(int i = 0; i < 3; i++)
    {
        getline(cin, a);
        file.write((char*) &a, sizeof(a));
    }
    file.flush();
    file.clear();
    file.seekg(0, ios::beg);
    for(int i = 0; i < 3; i++)
    {
        string b;
        file.read((char*) &b, sizeof(b));
        cout<<b<<" ";
    }
    file.close();
    return 0;  
}