#include <stdio.h>
struct employee
{
    int code;
    int salary;
};  
int main (){
    struct employee facebook[3], google;
    google.code = 72676;
    struct employee *ptr1, *ptr2;
    ptr1 = &facebook[0];
    ptr2 = &facebook[1];
    facebook[0].code = 1;
    facebook[0].salary = 12;
    facebook[1].code = 2;
    facebook[1].salary = 12;
    printf("%d %d\n", (*ptr1).code, (*ptr1).salary);
    printf("%d %d\n", (*ptr2).code, (*ptr2).salary);
    printf("%d\n", google.code);
    printf("Printing using arrow operator : %d", ptr1->salary);
    // ptr1->salary
    // is same as (*ptr1).code
    return 0;
}