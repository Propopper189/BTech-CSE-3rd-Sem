#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a;
    for(int i = 0; i < 20; i++)
    {
        a.push_back(i);
        cout<<a.size()<<" "<<a.capacity()<<endl;
    }
    return 0;
}