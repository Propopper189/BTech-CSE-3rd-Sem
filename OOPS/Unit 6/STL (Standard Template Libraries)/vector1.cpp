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
    cout<<"Initialized vector of size 5 with value 2 : ";
    for(int i = 0; i < 5; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.push_back(19);
    cout<<"After pushing 19 at the end of the vector : ";
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.insert(v.begin() + 1, 100);
    cout<<"After inserting 100 at index 1 : ";
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    // cout<<endl<<v.at(8); // same as cout<<v[8];
    cout<<endl<<"Size : "<<v.size()<<endl; // prints the size of the vector
    v.pop_back();
    cout<<"Size after pop_back() : "<<v.size()<<endl;
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    v.resize(10, 76);
    cout<<"After resize : ";
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    v.insert(v.begin() + 1, 12);
    cout<<"\nAfter inserting at pos 1 : ";
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    return 0;
}