/*
Write a program to implement program 5 using 
‘for’ and ‘do-while’ loop.
*/

// For Loop 

// #include <stdio.h>
// int main (){
//     int sum = 0;
//     int i = 1;
//     for (i; i<=10; i++){
//         sum = sum + i;
//     }
//     i = i - 1;
//     printf("The sum of first %d natural numbers is : %d", i, sum);
//     return 0;
// }

// Do While Loop

#include <stdio.h>
int main (){
    printf("Using DO-WHILE Loop\n");
    int sum  = 0;
    int i = 1;
    do {
        sum = sum + i;
        i = i + 1;
    }while (i<=10);
    i = i - 1;
    printf("The sum of first %d natural numbers is : %d", i, sum );
    return 0;
}