// Number Guessing Game.

// Program Starts Here.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between 1 and 100
    int random_number = (rand() % 100) + 1;

    // Print the random number
    // printf("Random number between 1 and 100: %d\n", random_number);
    int guessed;
    int number_of_attempts = 0;
    while (random_number!=guessed){
        printf("Guess The Number : ");
        scanf("%d", &guessed);
        if (random_number>guessed){
            printf("Higher Number Please\n");
        }
        else if (random_number<guessed){
            printf("Lower Number Please\n");
        }
        number_of_attempts = number_of_attempts + 1;
    }
    printf("The Actual Number Was %d\n", random_number);
    printf("You Made It In %d Attempts\n", number_of_attempts);
    return 0;
}

