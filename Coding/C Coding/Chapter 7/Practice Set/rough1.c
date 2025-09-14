#include <stdio.h>
int fibonacci(int a)
{
    if(a==1||a==2)
    {
        return a-1;
    }
    return fibonacci(a-1) + fibonacci(a-2);
}
int main (){
    printf("%d", fibonacci(6));
    return 0;
}