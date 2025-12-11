#include <iostream>
using namespace std;

void TOH(int n, char s, char a, char d)
{
    if(n == 1)
    {
        cout<<"Move disk from "<<s<<" to "<<d<<endl;
        return;
    }
    TOH(n-1, s, d, a);
    cout<<"Move disk from "<<s<<" to "<<d<<endl;
    TOH(n-1, a, s, d);

}
int main()
{
    TOH(3, 'A', 'B', 'C');
    return 0;
}