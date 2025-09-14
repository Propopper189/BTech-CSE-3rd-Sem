#include <stdio.h>
int main()
{
    int a;
    printf("Please Enter Your Number : ");
    scanf("%d", &a); //scanf reads value in "a". "&" is address of operator.
    printf("The input value is : %d",a);
    return 0;
}
