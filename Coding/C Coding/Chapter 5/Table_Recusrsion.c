#include <stdio.h>
int fn(int n, int i, int *table)
{
    if(i != 10)
    {
        *table = n * (i + 1);
        printf("%d X %d = %d\n", n, (i + 1), *table);
        return fn(n, (i + 1), table);
    }
}
int main (){
    // Print The Table Of A Given Number N Using Recursion
    int a = 3;
    int table = 0;
    fn(a, 0, &table);
    return 0;
}