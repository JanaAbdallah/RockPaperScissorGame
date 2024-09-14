#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Game.h"

int GenerateRandomNum() {
    int Game;
    int lower = 1, upper = 15; 
    int random_number;

    srand(time(NULL));

    random_number = (rand() % (upper - lower + 1)) + lower;
    
    // Rock Range
    if(random_number > 1 && random_number < 5) {
        Game = 1;
    }
    // Paper Range
    else if(random_number > 5 && random_number < 10) {
        Game = 2;
    }
    // Scissor Range
    else if(random_number > 10 && random_number < 15) {
        Game = 3;
    }

    return Game; // Ensure you return the generated game choice
}

void CheckChoice(int choice, int Game) {
        if(choice == Game) {
            printf("Tie \n");
        } else if(choice == 1 && Game == 2) {
            printf("You Picked Rock , Computer Picked Paper, You Lose\n");
        } else if(choice == 1 && Game == 3) {
            printf("You Picked Rock , Computer Picked Scissors, You Win\n");
        } else if(choice == 2 && Game == 1) {
            printf("You Picked Paper , Computer Picked Rock, You Win\n");
        } else if(choice == 2 && Game == 3) {
            printf("You Picked Paper , Computer Picked Scissors, You Lose\n");
        } else if(choice == 3 && Game == 1) {
            printf("You Picked Scissors , Computer Picked Rock, You Lose\n");
        } else if(choice == 3 && Game == 2) {
            printf("You Picked Scissors , Computer Picked Paper, You Win\n");
        }
}

void SetGame() {
    int choice =-1;

    while(choice!=4){
    printf("Rock-Paper-Scissors \nPress -> 1 for Rock\nPress -> 2 for Paper\nPress -> 3 for Scissors\nPress -> 4 to exit\n");
    scanf("%d", &choice);

    if(choice!=1 && choice!=2 && choice!=3 && choice!=4){
        printf("Invalid Option \n");
        break;
    }

    int Game = GenerateRandomNum(); // Fixed function call and usage

    CheckChoice(choice, Game);
}
}
