#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[20];
}; 
void show(struct employee);
void show(struct employee variable)
{
    printf("Code : %d\n", variable.code);
    printf("Name : %d\n", variable.name);
    printf("Salary : %f", variable.salary);
} 
int main (){
    struct employee e1;
    e1.code = 370005;
    e1.salary = 23;
    strcpy(e1.name, "Aquib");
    show(e1);
    return 0;
}