#include <iostream>
using namespace std;

template <typename T>
class Array
{
    public:
        T *arr;
        int size;
        Array(T arr[], int n)
        {
            size = n;
            this->arr = new T;
        }
};
int main()
{

    return 0;
}