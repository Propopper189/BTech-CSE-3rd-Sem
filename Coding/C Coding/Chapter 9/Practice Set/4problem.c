/*
Write a program to 
illustrate the use of arrow operator → in C.
*/

// Program Starts Here.

#include <stdio.h>
typedef struct emp
{
    int salary;
    float score;
}employee; 
int main (){
    employee e1;
    employee *ptr = &e1;
    ptr->salary = 12;
    // (*ptr).salary = 12;
    ptr->score = 20.3;
    printf("The vale of salary : %d and the value of score : %.2f", ptr->salary, ptr->score);


    return 0;
}