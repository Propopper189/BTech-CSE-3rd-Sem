// Complete this show function to display the content of employee.
#include <stdio.h>
#include <string.h>
struct employee
{
    int code; 
    float salary;
    char name[20];
};
void show(struct employee variabe);
void show(struct employee variable)
{
    printf("Code : %d\n", variable.code);
    printf("Name : %s\n", variable.name);
    printf("Salary : %.2f", variable.salary);
}
int main (){
    struct employee facebook;
    facebook.code = 1212;
    strcpy(facebook.name, "Aquib");
    facebook.salary = 12;
    show(facebook);
    return 0;
}