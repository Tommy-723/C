#include <stdio.h>

int main()
{
    int l, h;
    char symbol;
    printf("This is the rectangle and square maker!!!\n");
    printf("Choose the length of the shape you would like to create:");
    scanf("%d", &l);
    printf("Choose the height of the shape you would like to create:");
    scanf("%d", &h);
    printf("What symbol would you like to build it with?");
    scanf(" %c", &symbol);
    for (int j = 1; j <= h; j++)
    {
        for (int i = 1; i <= l; i++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}
