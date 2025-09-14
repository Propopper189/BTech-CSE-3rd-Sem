#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int myScore = 0;
int cScore = 0;
int computer;
int user;
int drwScore = 0;
int main (){
    srand(time(NULL));
    for(int i = 0; i<10; i++)
    {
    char c[] = "Snake";
    char d[] = "Water";
    char e[] = "Gun";
    

    // Generate a random number between 1 and 100
    
    printf("\n0-->Snake\n");
    printf("1-->Water\n");
    printf("2-->Gun\n\n");
    printf("Choose : ");
    scanf("%d", &user);
    printf("\n");
    if(user == 0)
    {
        printf("You Chose : %s\n", c);
    }
    else if(user == 1)
    {
        printf("You Chose : %s\n", d);
    }
    else if(user == 2)
    {
        printf("You Chose : %s\n", e);
    }
    computer = (rand() % 3);
    if(computer==0)
    {
        printf("Computer Chose : %s\n", c);
    }
    else if(computer == 1)
    {
        printf("Computer Chose : %s\n", d);
    }
    else if(computer == 2)
    {
        printf("Computer Chose : %s\n", e);
    }
    if(user == computer)
    {
        printf("\nIt's A Draw\n");
        drwScore++;
    }
    else if(user == 0 && computer == 1)
    {
        printf("\nYou Won..!\n");
        myScore++;
    }
    else if(user == 0 && computer == 2)
    {
        printf("\nYou Loose..!\n");
        cScore++;
    }
    else if(user == 1 && computer == 0)
    {
        printf("\nYou Loose..!\n");
        cScore++;
    }
    else if(user == 1 && computer == 2)
    {
        printf("\nYou Won..!\n");
        myScore++;
    }
    else if(user == 2 && computer == 0)
    {
        printf("\nYou Won..!\n");
        myScore++;
    }
    else if(user == 2 && computer == 1)
    {
        printf("\nYou Loose..!\n");
        cScore++;
    }
    else
    {
        printf("\nInvalid Input\n");
    }
    }
    printf("Your Score : %d\n", myScore);
    printf("Computer Score : %d\n", cScore);
    printf("Draw : %d Times", drwScore);
    if(myScore>cScore)
    {
        printf("\nYou Won The Game..!!\n");
    }
    else if(cScore>myScore)
    {
        printf("\nYou Loose The Game..!!\n");
    }
    else if(cScore==myScore)
    {
        printf("\nIt's A Draw\n");
    }
    return 0;
}