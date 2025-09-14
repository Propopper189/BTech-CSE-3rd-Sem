/*
Repeat problem 7 for a custom input given by the user.
*/

// Program Starts Here.

#include <stdio.h>
    
int main (){
    int table [3][10];
    int n1,n2,n3;
    
    printf("Enter All Your 3 Numbers One After Another\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    int mul[] = {n1,n2,n3};
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j<10; j++)
        {
            printf("%d ", mul[i]*(j+1));
        }
        printf("\n");
    }
    
    return 0;
}