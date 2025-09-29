#include <iostream>
#include <fstream> //stream = flow of data
// #include <bits/stdc++.h>
using namespace std;

// ifstream is for input
// ofstream is for writing data inside a file
// fstream is for both
int main()
{
    ofstream fileOut("test.txt");
    fileOut << "Hello World!!\n";
    fileOut<<"Hello LPU";
    fileOut.close();
    ifstream fileIn("test.txt");
    string str1;
    // fileIn>>str1;
    // for(int i = 0; str1[i] != '\n'; i++)
    // {
    //     cout<<str1[i];
    // }
    // cout<<str1<<endl;
    string str2;
    getline(fileIn, str1);
    cout<<str1<<endl;
    getline(fileIn, str2);
    cout<<str2<<endl;
    
    return 0;
}