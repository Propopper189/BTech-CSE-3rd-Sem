#include <stdio.h>
#include <string.h>
struct employee
{
    int serial;
    float salary;
    char name[20];
};
  
int main (){
    struct employee facebook[10];
    for(int i = 0; i<10; i++)
    {
        facebook[i].serial = i+1;
    }
    for(int i = 0; i<10; i++)
    {
        strcpy(facebook[i].name, "Aquib");
    }
    for(int i = 0; i<10; i++)
    {
        facebook[i].salary = 21.23;
    }
    for(int i = 0; i<10; i++)
    {
        printf("%d %s %.2f\n", facebook[i].serial, facebook[i].name, facebook[i].salary);
    }
    struct employee google = {100, 23.2, "Aquib"};
    printf("%d %s %.2f", google.serial, google.name, google.salary);
    return 0;
}