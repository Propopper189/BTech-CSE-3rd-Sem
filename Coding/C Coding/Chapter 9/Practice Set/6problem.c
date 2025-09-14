/*
Create an array of 5 complex numbers created in Problem 5 
and display them with the help of a display function. 
The values must be taken as an input from the user.
*/

#include <stdio.h>
typedef struct complex
{
    int real;
    int imaginary;
}complex;  
void display(complex*);  
void display(complex* c)
{
    complex *ptr;
    ptr = &c[0];
    for(int i = 0; i<5; i++)
    {
        printf("%d + %di\n", ptr->real, ptr->imaginary);
        ptr++;
    }
}  
int main (){
    complex c[5];
    for(int i = 0; i<5; i++)
    {
        printf("Enter your complex number : ");
        scanf("%d %d", &c[i].real, &c[i].imaginary);
    }
    display(c);
    return 0;
}