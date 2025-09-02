#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    printf("***NUMBER GUESSING GAME***\n");
    int min;
    int max;
    printf("Where would you like your set of numbers to start from:\n");
    scanf("%d", &min);
    printf("Where would you like your set of numbers to end at:\n");
    scanf("%d", &max);
    int answer = (rand() % (max - min + 1)) + min;
    int guess;
    int tries = 0;
    while (guess != answer)
    {
        printf("Guess the number that lies between (%d - %d):", min, max);
        scanf("%d", &guess);
        tries++;
        if (guess < answer && guess < max && guess > min)
        {
            printf("YOU NEED TO GUESS HIGHER!!!\n");
        }
        if (guess > answer && guess < max && guess > min)
        {
            printf("YOU NEED TO GUESS LOWER!!!\n");
        }
        if (guess < min || guess > max)
        {
            printf("Are you fucking stupid?\n");
        }
    }
    printf("YOU FOUND THE NUMBER!!! :)\n");
    printf("The number is: %d\n", answer);
    printf("It took you %d tries to guess the number.\n", tries);
    printf("HASTA LA VISTA!!!\n");
    return 0;
}
