#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> a)
{
    for(int x : a)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v;
    // insert at last
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    print(v);
    // delete from last
    v.pop_back();
    print(v);
    // insert at start
    v.insert(v.begin(), 500);
    print(v);
    // delete from start
    v.erase(v.begin());
    print(v);
    // insert at position
    int pos = 2;
    v.insert(v.begin() + pos, 500);
    print(v);
    // vector<int> a;
    // a = v;
    // print(a);
    // delete at position
    v.erase(v.begin() + 1);
    print(v);
    return 0;
}