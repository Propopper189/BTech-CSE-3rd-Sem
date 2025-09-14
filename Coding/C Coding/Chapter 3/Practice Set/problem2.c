#include <stdio.h>
int main()
{
    /*
    Write a program to determine whether a student has passed or failed. To pass, a
    student requires a total of 40% and at least 33% in each subject. Assume there
    are three subjects and take the marks as input from the user.
    */

   // Program starts here 
   int sub1;
   int sub2;
   int sub3;
   float percentage;
   printf("Please Enter The Marks Of First Subject : ");
   scanf("%d", &sub1);
   if(sub1>33){
    printf("Please Enter Marks Of The Second Subject : ");
    scanf("%d", &sub2);
    if(sub2>33){
        printf("Please Enter Marks Of The Third Subject : ");
        scanf("%d", &sub3);
        if (sub3>33){
            float pr;
            pr = sub1+sub2+sub3;
            percentage = pr/300*100;
            printf("You Have Scored %f percentage\n", percentage);
            if (percentage>40){
                printf("Passed");
            }
            else {
                printf("Failed");
            }
        }
        else{
            printf("Failed");
        }
    }
    else{
        printf("Failed");
    }
   }
   else {
    printf("Failed");
   }
    return 0;
}