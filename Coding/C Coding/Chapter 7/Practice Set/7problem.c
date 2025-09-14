/*
Create an array of size 3 x 10 containing 
multiplication tables of the numbers 2,7 and 9 
respectively.
*/

// Program Starts Here.

#include <stdio.h>
    
int main (){
    int a[3][10];
    int mul[] = {2,7,9};
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<10; j++)
        {
            a[i][j] = mul[i] * (j+1);
        }
    }
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<10;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}