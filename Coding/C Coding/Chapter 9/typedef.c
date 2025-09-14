#include <stdio.h>
#include <string.h>
typedef struct employee
{
    int code;
    float salary;
    char name[10];
} emp;
int main (){
    // typedef int aquib;
    // aquib a = 23;
    // printf("%d", a);
    // return 0;
    // typedef struct employee emp;  if typedef not defined at line 3
    emp e1;
    emp *ptr1 = &e1;
    strcpy(e1.name, "Aquib");
    e1.code = 370005;
    e1.salary = 23.56;
    printf("%d %s %.2f\n", e1.code, e1.name, e1.salary);
    printf("%d %s %.2f", ptr1->code, ptr1->name, ptr1->salary);
    return 0;
}