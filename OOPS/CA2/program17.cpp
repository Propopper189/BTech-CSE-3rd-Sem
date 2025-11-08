#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream file;
    file.open("program16.cpp");
    file.seekg(0, ios::beg);
    string s1;
    while(getline(file, s1))
    {
        cout<<s1<<endl;
    }
    file.close(); 
    return 0;
}