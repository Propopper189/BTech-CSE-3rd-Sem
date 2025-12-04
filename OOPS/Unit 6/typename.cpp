#include <iostream>
using namespace std;

template <typename T>
class Array
{
    public:
        T *arr;
        int size;
        Array(T arr[], int n); // just declare the function inside the class for creating a non inline function
        void print(); // just declare the function inside the class for creating a non inline function
};
template <typename T>
Array<T>::Array(T arr[], int n)
{
    size = n;
    this->arr = new T[size];
    for(int i =0; i < size; i++)
    {
        this->arr[i] = arr[i];
    }
}

template <typename T>
void Array<T>::print()
{
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    Array<int> a(arr, 5);
    a.print();
    return 0;
}