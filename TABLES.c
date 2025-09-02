#include <stdio.h>

int main()
{
    int num;
    printf("Which number would you like to have the table?\n");
    scanf("%d", &num);
    printf("Till how much do you want the table to go till: ");
    int till;
    scanf("%d", &till);
    int table[till];
    int sum = 0;
    int i = 0;
    do
    {
        printf("%d x %d = %d\n", num, i, num * i);
        table[i] = num * i;
        sum += num * i;
        i++;
    } while (i <= till);
    printf("The sum of all the numbers in the following %d table is: %d", num, sum);
    printf(" \n");
    for (int i = 0; i <= till; i++)
    {
        printf("%d X %d = %d \n", num, i, table[i]);
    }

    return 0;
}