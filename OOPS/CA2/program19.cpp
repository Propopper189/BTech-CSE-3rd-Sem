#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Write a program that counts the number of characters, words, and lines in a text file.
    ifstream file;
    file.open("program16.txt");
    int charCount = 0, lineCount = 0;
    char ch;
    while(file.get(ch))
    {
        charCount++;
        if(ch == '\n')
        {
            lineCount++;
        }
    }
    cout<<charCount<<" "<<lineCount + 1;
    return 0;
}