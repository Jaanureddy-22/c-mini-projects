#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomnumber;
    int n, i;
    int guess;
    int max_attempts;

    srand(time(0)); // for random number

    // asked range from user
    printf("Enter range to guess a number (max value): ");
    scanf("%d", &n);

    // its Generate random number in range
    randomnumber = (rand() % n) + 1;

    //  max attempts to guess 
    printf("Number of chances to guess: ");
    scanf("%d", &max_attempts);

    // Loop for guessing
    for (i = 1; i <= max_attempts; i++) {
        printf("Attempt %d - Enter your guess: ", i);
        scanf("%d", &guess);

        if (randomnumber == guess) {
            printf("CORRECT! You guessed it in %d tries.\n", i);
            break; // exit loop when correct
        }
        else if (randomnumber > guess) {
            printf("TOO LOW! Try again.\n");
        }
        else {
            printf("TOO HIGH! Try again.\n");
        }
    }

    if (i > max_attempts && guess != randomnumber) {
        printf("Out of attempts! The correct number was %d.\n", randomnumber);
    }

    return 0;
}
