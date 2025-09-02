#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef enum
{
    ROCK = 1,
    PAPER = 2,
    SCISSORS = 3
} Your_choice;
int main()
{
    srand(time(NULL));
    int min = 1;
    int max = 3;
    int your_choice;
    printf("Welcome to ROCK PAPER AND SCISSORS!!!\n");
    int round = 1;
    int your_score = 0;
    int computer_score = 0;
    while (1)
    {
        printf("ROUND- %d!!!\n", round);
        int computer = (rand() % (max - min + 1)) + min;
        printf("Please choose your item (1 - 4):\n");
        printf("1-Rock\n");
        printf("2-Paper\n");
        printf("3-Scissor\n");
        printf("4-Done\n");
        scanf("%d", &your_choice);

        switch (your_choice)
        {
        case ROCK: // Rock
            printf("You choose ROCK!!!\n");
            if (computer == ROCK)
            {
                printf("The computer choose ROCK!!!\n");
                printf("It's A Tie!!!\n");
            }
            else if (computer == PAPER)
            {
                printf("The computer choose PAPER!!!\n");
                printf("You Lost!!!\n");
                computer_score++;
            }
            else if (computer == SCISSORS)
            {
                printf("The computer choose SCISSORS!!!\n");
                printf("You Won!!!\n");
                your_score++;
            }
            else
            {
                printf("Invalid Output!!!\n");
                printf("Please Try Again!!!\n");
            }
            break;
        case PAPER: // Paper
            printf("You choose PAPER!!!\n");
            if (computer == ROCK)
            {
                printf("The computer choose ROCK!!!\n");
                printf("You Won!!!\n");
                your_score++;
            }
            else if (computer == PAPER)
            {
                printf("The computer choose PAPER!!!\n");
                printf("It's A Tie!!!\n");
            }
            else if (computer == SCISSORS)
            {
                printf("The computer choose SCISSORS!!!\n");
                printf("You Lost!!!\n");
                computer_score++;
            }
            else
            {
                printf("Invalid Output!!!\n");
                printf("Please Try Again!!!\n");
            }
            break;

        case SCISSORS: // Scissors
            printf("You choose SCISSORS!!!\n");
            if (computer == ROCK)
            {
                printf("The computer choose ROCK!!!\n");
                printf("You Lost!!!\n");
                computer_score++;
            }
            else if (computer == PAPER)
            {
                printf("The computer choose PAPER!!!\n");
                printf("You Won!!!\n");
                your_score++;
            }
            else if (computer == SCISSORS)
            {
                printf("The computer choose SCISSORS!!!\n");
                printf("It's A Tie!!!\n");
            }
            else
            {
                printf("Invalid Output!!!\n");
                printf("Please Try Again!!!\n");
            }
            break;

        default:
        {
            printf("Invalid Output!!!\n");
            printf("Please Try Again!!!\n");
        }
        break;
        case 4:
            if (your_score < computer_score)
            {
                printf("YOU LOST THE GAME!!!");
            }
            else if (your_score > computer_score)
            {
                printf("YOU WON THE GAME!!!");
            }
            else if (your_score == computer_score)
            {
                printf("IT'S A DRAW!!!");
            }
            return 0;
        }
        printf("SCORE: %d - %d\n", computer_score, your_score);
        round++;
    }
    return 0;
}