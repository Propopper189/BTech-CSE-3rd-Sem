#include <stdio.h>
int factorial(int);
int factorial(int n){
    if (n==1||n==0){
        return 1;
    }
    return factorial(n-1) * n;
}
int main (){
    int a;
    printf("Please enter your number : ");
    scanf("%d", &a);
    int c = factorial(a);
    printf("The factorial of %d is %d", a, c);
    return 0;
}

/*
#include <stdio.h>
int factorial(int);
int factorial(int a){
    if (a==0 || a==1){
        return 1;
    }
    return factorial(a-1)*a;
}
int main (){
    int n;
    printf("Please enter your number : ");
    scanf("%d", &n);
    printf("The factorial of %d is %d", n, factorial(n));
    return 0;
}
*/