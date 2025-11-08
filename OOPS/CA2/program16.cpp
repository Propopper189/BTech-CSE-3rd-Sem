#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file;
    file.open("program16.txt");
    file << "Hello";
    file.flush();
    file.clear();
    file.close();
    ifstream file1;
    file1.open("program16.txt");
    string s1;
    file1 >> s1;
    cout<<s1;
    file1.close();
    return 0;
}