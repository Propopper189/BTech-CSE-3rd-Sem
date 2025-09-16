#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout<<arr<<" "<<&arr[0]<<" "<< *arr << " "<<arr[0]<<endl;
    cout<<arr<<" "<<arr + 1<<" " <<arr + 2<<" "<<arr + 3;
    return 0;
}