/*
Find the complexity of the following code which tests
whether a given number is prime/not.
*/

// Program Starts Here.

#include <stdio.h>
int isPrime(int n)
{
    if(n==1)
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
    if(check == 1)
    {
        printf("%d is a prime number.",n);
    }
    else if(check == 0)
    {
        printf("%d is not a prime number.",n);
    }
    return 0;
}