/*
Consider the recursive algorithm below, where the random number
(int n) spends one unit of time to return a random integer
which is evenly distributed within the range [0, n]. If the
average processing time is T(n), what is the value of T(6)?
*/

// Program starts here.

#include <stdio.h>
#include <stdlib.h>
int count = 0;
int random(int a)
{
    int i;
    int num = (rand()%(a+1));
    return num;
}
int function(int n)
{
    int i;
    if(n<=0)
    {
        return 0;
    }
    else
    {
        i = random(n-1);
        printf("I am\n");
        count++;
        return function(i) + function(n-1-i);
    }
}
int main (){
    function(6);
    printf("Number of times the fuction ran : %d", count);
    return 0;
}