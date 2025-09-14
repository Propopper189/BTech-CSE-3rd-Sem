/*
    Calculate income tax paid by an employee to the government as per the slabs
    mentioned below:
    Income Slab Tax
    2.5 – 5.0L 5%
    5.0L - 10.0L 20%
    Above 10.0L 30%
    Note that there is no tax below 2.5L. Take income amount as an input from the user
    */
   
    // Program starts here

#include <stdio.h>
int main (){
    int income; 
    float tax = 0;
    printf("Please Enter Your Income : ");
    scanf("%d", &income);
    if (income<250000){
        tax = 0;
        printf("Tax paid to the govt is %.2f Rupees", tax);
    }
    else if (income>250000 && income<=500000) {
        tax = 0.05*(income-250000);
        printf("Tax paid to the govt is %.2f Rupees", tax);
    }
    else if (income>500000 && income <=1000000){
        tax = 0.05*(500000-250000)+0.20*(income - 500000);
        printf("Tax paid to the govt is %.2f Rupees", tax);
    }
    else if (income>1000000){
        tax = 0.05*(500000-250000)+0.20*(1000000-500000)+0.30*(income-1000000);
        printf("Tax paid to the govt is %.2f Rupees", tax);
    }
}