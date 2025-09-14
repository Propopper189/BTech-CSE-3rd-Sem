/*
Take name and salary of two employees as input 
from the user and write them to a text file in the 
following format:
i. Name1, 3300
ii. Name2, 7700
*/

// Program Starts Here.

#include <stdio.h>
typedef struct employee
{
    int salary;
    char name[10];
}employee;   
int main (){
    employee e[2];

    for(int i = 0; i<2; i++)
    {
        printf("Enter Name : ");
        scanf("%s", &e[i].name);
        printf("Enter Salary : ");
        scanf("%d", &e[i].salary);
    }

    FILE *ptr;
    ptr = fopen("4problem.txt", "w");

    for(int i = 0; i<2; i++)
    {
        fprintf(ptr, "%d. %s, %d L.P.A\n", i+1, e[i].name, e[i].salary);
    }
    
    return 0;
}