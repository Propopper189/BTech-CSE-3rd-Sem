#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> a)
{
    for(int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v1; // Empty Vector
    vector<int> v2(5); // Size of the vector is 5 and all the elements are 0.
    vector<int> v3(10, 500); // Size of the vector is 10 and all the elements are 500.
    vector<int> v4 = {1, 3, 5, 10}; // Directly initialized values.
    print(v1);
    print(v2);
    print(v3);
    print(v4);
    return 0;
}