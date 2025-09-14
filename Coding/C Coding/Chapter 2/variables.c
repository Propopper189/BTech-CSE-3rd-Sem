#include <stdio.h>
int main (){
    int i = 10; //i is defined as 10.
    int j = i; //j is defined as i means j have the value of i that is 10.
    printf("The value of j is : %d\n", j);
    int a = 2, b = 3, c = 4, d = 5;
    //%d is called format specifier
    //%d is for int, %f is for float and %c is for char.
    printf("The value of i is %d and the value of j is %d\n", i, j);
    printf("The value of a is %d and the value of b is %d\n", a, b);
    printf("The value of c is %d and the value of d is %d\n", c, d);
    //you cannot change the variable type from int to float or to char or vice versa.
    int j1 = a+j-i; // valid because a,j and i was previously defined as int.
    float j2 = a+j;
    printf("The vale of j1 is : %d\n", j1);
    //printf("The value of j2 is %d", j2); //the result shows 0 because a and j was previously defined as int and not float.
    int g,h,k;
    g=h=k=30;
    printf("The value of g is : %d \n", g);//"%d" format specifiers are very important.
    printf("The value of h is : %d \n", h);//"%d" format specifiers are very important.
    printf("The value of k is : %d \n", k);//"%d" format specifiers are very important.
    return 0;
}