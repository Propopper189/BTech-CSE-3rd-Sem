#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p1 = &a;
    int **p2 = &p1;
    cout<<p2<<" "<<*p2<<" "<<**p2<<endl;
    cout<<p1<<" "<<*p1<<endl;
    return 0;
}