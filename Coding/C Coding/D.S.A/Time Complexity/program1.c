/*
Find the time complexity of the func1 function in the
program shown in program1.c
*/

// Program Starts Here.

#include <stdio.h>
int isPrime(int n)
{
    if(n == 1)
    {
        return 0;
    }
    for(int i = 2; i*i <= n; i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main (){
    int n;
    printf("Please enter your number : ");
    scanf("%d", &n);
    int check = isPrime(n);
    check == 1?printf("%d is a prime number.", n):printf("%d is not a prime number.", n);
    return 0;
}