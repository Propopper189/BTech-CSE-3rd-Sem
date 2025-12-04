#include <iostream>
using namespace std;

template <typename T>
class Parent
{
    public:
        T *arr;
        int size;
        Parent(T a[], int n)
        {
            size = n;
            arr = new T[n];
            for(int i = 0; i < n; i++)
            {
                arr[i] = a[i];
            }
        }
        void print()
        {
            for(int i = 0; i < size; i++)
            {
                cout<<arr[i]<<" ";
            }
        }
};
template <typename T>
class Child : virtual public Parent<T>
{
    public:
        Child(T array[], int n) : Parent<T>(array, n)
        {
            this->arr = array;
            this->size = n;
        }
        void print();
};

template <typename T>
void Child<T>::print()
{
    for(int i = 0; i < this->size; i++)
    {
        cout<<this->arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    Child<int> a(arr, 5);
    a.print();
    return 0;
}