/*
Implement 10 using other types of loops.
*/

// While loop

// #include <stdio.h>
// int main (){
//     int n;
//     printf("Please enter your number : ");
//     scanf("%d", &n);
//     if (n==1 || n==0){
//         printf("%d is neither prime nor composite", n);
//     }
//     int i = 2;
//     while (i<n){
//         if (n%i == 0 && n != 2){
//             printf("Not Prime");
//             return 0;
//         }


//         i = i + 1;
//     }
//     printf("Prime");
//     return 0;
// }

// Do While Loop

#include <stdio.h>
int main (){
    int n;
    printf("Please enter your number : ");
    scanf("%d", &n);
    if (n==1 || n == 0){
        printf("%d is neither a prime nor a composite number");
        return 0;
    }
    int i = 1;
    do {
        if (i!=1){
            if (n%i == 0 && n != 2){
                printf("Not Prime");
                return 0;
            }
        }
        i = i + 1;
    }while (i<n);
    printf("Prime");
    return 0;
}