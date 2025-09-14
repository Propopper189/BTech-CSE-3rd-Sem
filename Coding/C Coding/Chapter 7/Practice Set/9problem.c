/*
Create a three–dimensional array and print the address of its elements in
increasing order.
*/

// Program Starts Here.

#include <stdio.h>
    
int main (){
    int a[4][5][6];
    for(int i = 0; i<4; i++)
    {
        for(int j = 0; j<5;j++)
        {
            for(int k = 0; k<6; k++)
            {
                printf("%u ", &a[i][j][k]);
            }
        }
    }
    return 0;
}