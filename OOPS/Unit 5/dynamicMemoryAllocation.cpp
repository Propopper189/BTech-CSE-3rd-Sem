#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int(90);
    // *ptr = 24;
    cout<<"Int: "<<*ptr<<endl;
    delete ptr; // ptr becomes dangling pointer
    ptr = NULL;
    double *ptrD = new double(10.11);
    // cout<<ptrD<<endl;
    float *ptrF = new float(190.09);
    cout<<"Double: "<<*ptrD<<endl;
    cout<<"Float: "<<*ptrF<<endl;
    return 0;
}