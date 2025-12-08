// Vectors
// access items([], at()), size(), resize(n, init),
// push_back(value), insert(pos, value), find(),
// push_back(), erase(pos) ;
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(5, 2);
    for(int i = 0; i < 5; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.push_back(19);
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.insert(v.begin() + 1, 100);
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl<<v.size(); // prints the size of the vector
    return 0;
}