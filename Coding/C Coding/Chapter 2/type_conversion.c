#include <stdio.h>
int main (){
    int a = 9;
    int b = 2;
    float c = a/b;
    printf("The value of a/b is %f", c);
    /*
    Arithmetic operations
    int with int = int
    int with float = float
    float with float = float
    */
   printf("\nThe correct way to divide is int with float : ");
   float d = 9.0;
   int e = 2;
   float f = d/e;
   printf("\nThe value of a when it is divided by b is : %f",f);
   int g = 6.7;
   printf("\nThe value of g is %d, as you can see, it is demotioned from 6.7 to %d", g,g);

    return 0;
}
