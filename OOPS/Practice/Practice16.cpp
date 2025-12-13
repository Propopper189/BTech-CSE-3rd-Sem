/*
Create a diamond (A → B, A → C, B & C → D) 
and show ambiguity without virtual inheritance.
*/

#include <iostream>
using namespace std;

class A
{
    public:
        void print()
        {
            cout<<"A"<<endl;
        }
};

class B : public A
{
    public:
        
};

class C : public A
{
    public:

};  

class D : public C, public B
{
    public:
    
};
int main()
{
    D obj;
    obj.C::print();
    return 0;   
}