#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 23, 54, 234, 543};
    int *p = arr;
    cout<<*p<<endl;
    int *ptr = p + 3;
    cout<<ptr-p<<" "<<p-ptr<<endl; // prints the numbers of elements between two pointers
    return 0;
}