#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {

    int number, guess = 0, i;

    srand(time(0));

    number = rand() % 100 + 1;

    for(i = 1; guess != number; i++) {

        printf("Enter your guess (1 to 100): ");
        scanf("%d", &guess);

        if(guess > number) {
            printf("Too high!\n");
        }

        else if(guess < number) {
            printf("Too low!\n");
        }

        else {
            printf("Correct guess!\n");
            printf("You guessed in %d attempts\n", i);
        }
    }

    return 0;
}