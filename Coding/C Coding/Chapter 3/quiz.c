#include <stdio.h>
int main (){
    int marks; 
    printf("Please Enter Your Marks : ");
    scanf("%d", &marks);
    if (marks>=90 && marks<=100){
        printf("Your Grade Is A");
    }
    else if (marks>=80 && 89>=marks){
        printf("Your Grade is B");
    }
    else if (marks>=70 && marks<=79){
        printf("Your Grade is C");
    }
    else if (marks>=60 && marks <=69){
        printf("Your Grade is D");
    }
    else if (marks>=50 && marks <=59){
        printf("Your Grade is E");
    }
    else if (marks<50){
        printf("Your Grade is F");
    }
    return 0;
}