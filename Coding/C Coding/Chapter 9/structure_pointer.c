#include <stdio.h>
#include <string.h>

struct employee
{
    int code; 
    float salary; 
    char name[10];
};
   
int main (){
    struct employee facebook, google, *ptr1, *ptr2;
    ptr2 = &google;
    facebook.code = 12;
    facebook.salary = 13;
    strcpy(facebook.name, "Akeeb");
    strcpy(google.name, "Anabia");
    ptr1 = &facebook;
    printf("%u\n", ptr1);
    printf("%u\n", ptr2);
    // Let's print the values present at the pointers.
    printf("Name Facebook : %s\n", (*ptr1).name);
    printf("Name Facebook : %s\n", ptr1->name);
    // ptr->name 
    // same as (*ptr1).name;
    return 0;
}