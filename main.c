#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char user_choice;
    int random;

    srand(time(NULL));
    random = rand()%3;

    printf("Welcome to rock paper scissors!\n");
    printf("Enter your choice R for Rock, P for Paper, S for Scissors: ");
    scanf("%c", &user_choice);
    user_choice = toupper(user_choice);


    printf("You entered: %c\n", user_choice);
    if (random == 0 && user_choice == 'R') {
        printf("Computer chose Rock\n");
        printf("Tie!\n");
    }

    if (random == 1 && user_choice == 'R') {
        printf("Computer chose Paper\n");
        printf("You lost!\n");
    }

    if (random == 2 && user_choice == 'R') {
        printf("Computer chose Scissors\n");
        printf("You won!\n");
    }

    if (random == 0 && user_choice == 'P') {
        printf("Computer chose Rock\n");
        printf("You won!\n");
    }

    if (random == 1 && user_choice == 'P') {
        printf("Computer chose Paper\n");
        printf("Tie!\n");
    }

    if (random == 2 && user_choice == 'P') {
        printf("Computer chose Scissors\n");
        printf("You lost!\n");
    }

    if (random == 0 && user_choice == 'S') {
        printf("Computer chose Rock\n");
        printf("You lost!\n");
    }

    if (random == 1 && user_choice == 'S') {
        printf("Computer chose Paper\n");
        printf("You won!\n");
    }

    if (random == 2 && user_choice == 'S') {
        printf("Computer chose Scissors\n");
        printf("Tie!\n");
    }
    
    return 0;
}
