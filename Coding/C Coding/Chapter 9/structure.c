#include <stdio.h>
#include <string.h>
struct employee // it should be out of main()
{
    int code; // this declares a new user defined data type.
    float salary; 
    char name[10];
};
int main (){
    struct employee e1, e2; //creating a structure variable
    e1.code = 370005;
    strcpy(e1.name, "Aquib");
    e1.salary = 12.3;
    printf("Code : %d\n", e1.code);
    printf("Name : %s\n", e1.name);
    printf("Salary : %.2f", e1.salary);
    return 0;
}