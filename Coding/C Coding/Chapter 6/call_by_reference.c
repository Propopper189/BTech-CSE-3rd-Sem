#include <stdio.h>
int sum(int*, int*);
// sum() should change the value of x.
int sum(int* a, int* b){
    *a = 6;
    return *a+*b;
}
int main (){
    int x = 1, y = 6;
    printf("The sum of %d and %d is %d\n",x,y, x+y); // The value of x is not 
    // changed here because sum function is running after this line.
    sum(&x,&y); // The value of x is changed here.
    printf("The value of x is %d\n", x); //This will print x as the changed value (6), and from here x is 6.
    return 0;
}