/*
What can be done using one type of loop can also be done using the other two
types of loops – true or false?

Ans = True.
*/

// #include <stdio.h>
// int main (){
//     printf("Printing all natral numbers from 1 to 10.\n");
//     for (int i = 1; i <= 10; i++){
//         printf("%d\n", i);
//     }

//     return 0;
// }

// Can be done with other loops too.

#include <stdio.h>
int main (){
    printf("Printing all natural numbers from 1 to 10 using other loop.\n");
    int i = 1;
    do{
        printf("%d\n", i);
        i = i + 1;
    } while (i<=10);

    return 0;
}