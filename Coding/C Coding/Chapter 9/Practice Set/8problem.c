/*
Create a structure representing a bank  account of a customer. 
What fields did you use and why?
*/

// Program Starts Here.

#include <stdio.h>
#include <string.h>
typedef struct bankacc
{
    int account_number;
    char name[36];
    char IFSC[12];
    float expense;
    float last_balance;
    // float balance;
}account;  
int main (){
    account SBI[100];
    for(int i = 0; i<100; i++)
    {
        printf("\nEnter name : ");
        // char name[36];
        scanf("%s", &SBI[i].name);
        // strcpy(SBI[i].name, name);
        printf("Enter IFSC code : ");
        scanf("%s", &SBI[i].IFSC);
        printf("Enter account number : ");
        scanf("%d", &SBI[i].account_number);
        printf("Enter Last Balance : ");
        scanf("%f", &SBI[i].last_balance);
        printf("Enter Expenses : ");
        scanf("%f", &SBI[i].expense);
        printf("\nName : %s\n", SBI[i].name);
        printf("Account Number : %d\n", SBI[i].account_number);
        printf("IFSC : %s\n", SBI[i].IFSC);
        printf("Current Balance : %.2f\n", SBI[i].last_balance-SBI[i].expense);

    }
    return 0;
}