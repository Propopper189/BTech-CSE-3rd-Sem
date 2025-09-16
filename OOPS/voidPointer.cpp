// Wrong Void Pointer
// #include <iostream>
// using namespace std;

// int main()
// {
//     int x = 10;
//     void *a = &x;
//     cout<<*a;
//     return 0;
// }

// Correct Void Pointer
#include <iostream>
using namespace std;

int main()
{
    void *ptr; // void pointer can point to any data type
    int a = 10;
    char b = 'A';
    ptr = &a; 
    cout<<*(int*)ptr<<endl;
    ptr = &b;
    cout<<*(char*)ptr;
}