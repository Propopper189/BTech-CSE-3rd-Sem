#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = a;
    int &c = a;
    cout<<a<<" "<<b<<" "<<c<<endl;
    b = 20;
    cout<<a<<" "<<b<<" "<<c<<endl;
    c = 89;
    cout<<a<<" "<<b<<" "<<c<<endl;
    a = 34;
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}