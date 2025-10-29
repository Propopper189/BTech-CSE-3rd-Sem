// Override, Virtual
#include <iostream>
using namespace std;

class Animal
{
    public:
        virtual void sound()
        {
            cout<<"Animal Is Making Sound\n";
        }
};

class Dog : public Animal
{
    public:
        void sound() override
        {
            cout<<"Dog Is Barking\n";
        }
};
int main()
{
    Dog gr;
    Animal l;
    l.sound();
    Animal *ptr = &gr;
    gr.sound();
    ptr->sound();
    return 0;
}