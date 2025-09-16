#include <iostream>
using namespace std;

int main()
{
    int *ptr1;
    int *ptr2;
    int arr[] = {1, 2, 3};
    ptr1 = arr;
    ptr2 = arr + 1;
    if(ptr1 < ptr2)
    {
        cout<<"Ptr2 comes after ptr1 "<<sizeof(ptr2);
    }
    return 0;
}