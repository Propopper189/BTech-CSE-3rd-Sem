#include <iostream>
using namespace std;

template <typename T>
class Base
{
    public: 
        T x;
        void set(T a)
        {
            x = a;
        }
        T get()
        {
            return x;
        }
};

template <typename T, typename U>
class Derived : public Base<U>
{
    public:
        T b;
        void set(T a)
        {
            b = a;
            Base<U>::set(a);
        }
        T get()
        {
            cout<<b<<endl;
            Base<U>::get();
        }
};
int main()
{  
    int a = 10;
    Derived<int, char> b;
    b.set(a);
    int c = b.get();
    cout<<c<<endl;
    return 0;
}