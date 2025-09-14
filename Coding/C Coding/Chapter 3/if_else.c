#include <stdio.h>
int main (){
    int age = 5; // Assigning variable as 5
    if(age>10){ //checking if age is greater than 10, if the age is greater than 10 (condition), the program under the curly brackets will run otherwise will be ignored.
        printf("Age is greater than 10"); //printing when age is greater than 10.
    }
    else{ //if the conditional statement (if) doesn't satisfy, this will run otherwise will be ignored.
        printf("Age is not greater than 10"); //printing when age is not greater than 10.
    }
    return 0;
}