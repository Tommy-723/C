#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    printf("What would you like to check:\n");
    char name[100];
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    char namet[100];
    int len = strlen(namet);
    strcpy(namet, name);
    for (int i = 0; i < len / 2; i++)
    {
        char temp = namet[i];
        namet[i] = namet[len - i - 1];
        namet[len - i - 1] = temp;
    }
    (strcmp(name, namet) == 0) ? printf("It's a Palindrome.\n") : printf("It's not a Palindrome.\n");

    return 0;
}