#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    printf("Welcome to the Dice Roller!\n");
    int die;
    printf("How many dice would you like to roll?:\n");
    scanf("%d", &die);
for(int i = 1; i <= die; i++)
{
    int random = (rand() % (6 - 1 + 1)) + 1;
    printf("#%d %d\n", i, random);
}
    return 0;
}