#include <stdio.h>
int main (){
    int i = 5;
    //5
    printf("The value of i is : %d\n", i);
    i = i + 5;
    //10
    printf("The value of i is : %d\n", i);
    i++; // is same as i = i + 1;
    //11
    printf("The value of i is : %d\n", i);
    printf("The value of i is : %d\n", i++); //This will print i first and then add it by 1.
    //11
    printf("The value of i is : %d\n", ++i); //This will add first and then print i.
    //13

    return 0;
}