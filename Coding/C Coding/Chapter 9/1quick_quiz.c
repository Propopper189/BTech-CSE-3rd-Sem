/*
Write a program to store the details of 
3 employees from user defined data. Use the structure 
declared above.
*/

// Program Starts Here.

#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    char name[20];
    float salary;
};
int main (){
    struct employee e1, e2, e3;
    printf("Enter Code Of First Employee : ");
    scanf("%d", &e1.code);
    
    printf("Enter Name Of First Employee : ");
    scanf("%s", &e1.name);

    printf("Enter Salary Of First Employee : ");
    scanf("%f", &e1.salary);

    printf("Enter Code Of Second Employee : ");
    scanf("%d", &e2.code);
    
    printf("Enter Name Of Second Employee : ");
    scanf("%s", &e2.name);

    printf("Enter Salary Of Second Employee : ");
    scanf("%f", &e2.salary);

    printf("Enter Code Of Third Employee : ");
    scanf("%d", &e3.code);
    
    printf("Enter Name Of Third Employee : ");
    scanf("%s", &e3.name);

    printf("Enter Salary Of Third Employee : ");
    scanf("%f", &e3.salary);
    printf("Code | Name | Salary\n");
    printf("%d | %s | %.2f\n", e1.code, e1.name, e1.salary);
    printf("%d | %s | %.2f\n", e2.code, e2.name, e2.salary);
    printf("%d | %s | %.2f\n", e3.code, e3.name, e3.salary);
    return 0;
}