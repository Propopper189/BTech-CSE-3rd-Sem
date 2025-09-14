#include <stdio.h>
int main (){
    int age;
    printf("Please Enter Your Age : ");
    scanf("%d", &age);
    if(age>60){ //If this condition satisfies, compiler will ignore the other conditions in else if.
        printf("You can drive and you are a senior citizen");
    }
    else if (age>40){
        printf("You can drive and you are above 40 years.");
    }
    else if (age>=18){
        printf("You can drive");
    }
    else{ //last else will be executed only if all conditions fails.
        printf("You cannot drive");
    }
    return 0;
}