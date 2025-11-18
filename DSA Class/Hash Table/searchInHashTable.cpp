#include <iostream>
using namespace std;

#define size 10

void insert(int *table, int element)
{
    int index = element % size;
    int start = index;
    while(table[index] != -1)
    {
        index = (index + 1) % size;
        if(start == index)
        {
            cout<<"No space in the table\n";
            return;
        }
    }
    table[index] = element;
}

void display(int *table)
{
    for(int i = 0; i < size; i++)
    {
        if(table[i] == -1)
        {
            cout<<i<<" --> NULL"<<endl;
        }
        else
        {
            cout<<i<<" --> "<<table[i]<<endl;
        }
    }
}

void init(int *table)
{
    for(int i = 0; i < size; i++)
    {
        table[i] = -1;
    }
}

bool search(int *table, int key)
{
    int index = key % size;
    int start = index;
    while(table[index] != -1)
    {
        if(table[index] == key)
        {
            return true;
        }
        index = (index + 1) % size;
        if(index == start)
        {
            return false;
        }
    }
    return false;
}

int main()
{
    int hashTable[size];
    init(hashTable);
    insert(hashTable, 10);
    insert(hashTable, 35);
    insert(hashTable, 60);
    insert(hashTable, 70);
    insert(hashTable, 65);
    insert(hashTable, 88);
    insert(hashTable, 99);
    display(hashTable);
    cout<<"Enter Key : ";
    int element;
    cin>>element;
    bool yes = search(hashTable, element);
    if(yes == false)
    {
        cout<<"Not found\n";
    }
    else
    {
        cout<<"Found\n";
    }
    return 0;
}