#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main()
{

    printf("What would you like to do?\n");
    printf("1- Code Maker\n");
    printf("2- Code Breaker \n");
    int choice;
    int length = 0;
    char code[1024] = {0}; // Use a fixed-size buffer for simplicity
    char code_breaker = 0;
    int count = 0;
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("How long is the information you want to encrypt \n");
        printf("Enter the number of charecters it uses including spaces and symbols.\n");
        scanf("%d", &length);
        getchar();
        if (length > 1023)
            length = 1023;
        printf("What do you want to encrypt: \n");
        fgets(code, length + 1, stdin);
        if (code[strlen(code) - 1] == '\n')
        {
            code[strlen(code) - 1] = '\0';
        }
        printf("Choose a letter from what you want to encrypt: \n");
        scanf(" %c", &code_breaker);
        count = 0;
        for (int i = 0; i < strlen(code); i++)
        {
            if (code[i] == code_breaker)
            {
                count++;
            }
        }
        for (int i = 0; code[i] != '\0'; i++)
        {
            code[i] = code[i] + count;
        }
        printf("%s", code);
        printf(" \n");
        char aph = 'a';
        printf("Your code breaker is: %c\n", aph + count);

        break;
    case 2:
        printf("How long is the information you want to decode.\n");
        printf("Enter the number of charecters it uses including spaces.\n");
        scanf("%d", &length);
        getchar();
        if (length > 1023)
            length = 1023;
        printf("What is the code you want to break? \n");
        fgets(code, length + 1, stdin);
        if (code[strlen(code) - 1] == '\n')
        {
            code[strlen(code) - 1] = '\0';
        }
        printf("What is the code breaker?\n");
        scanf(" %c", &code_breaker);
        count = code_breaker - 'a';
        for (int i = 0; code[i] != '\0'; i++)
        {
            code[i] = code[i] - count;
        }
        printf("Your code message is:\n");
        printf("%s", code);
        break;

    default:
        printf("Invaid Input.\n");
        break;
    }

    return 0;
}