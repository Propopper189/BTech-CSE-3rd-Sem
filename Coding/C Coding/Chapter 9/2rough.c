#include <stdio.h>
#include <string.h>
struct employee
{
    int serial;
    int salary;
    char name[10];
}; 
int main (){
    struct employee facebook[3];
    for(int i = 0; i<3; i++)
    {
        facebook[i].serial = i+1;
        printf("Enter The Name : ");
        scanf("%s", &facebook[i].name);
        printf("Enter The Salary : ");
        scanf("%d", &facebook[i].salary);
    }
    printf("Serial |Name | Salary |\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\t%s\t%d\n", facebook[i].serial, facebook[i].name, facebook[i].salary);
    }
    
    return 0;
}