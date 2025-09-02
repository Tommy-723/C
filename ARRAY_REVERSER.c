#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

void Print(int count, int num[])
{
    for (int i = 0; i < count; i++)
    {
        printf("%d", num[i]);
        if (i < count - 1)
        {
            printf(", ");
        }
    }
}

void Reverse(int count, int num[])
{
    for (int i = 0; i <= count / 2; i++)
    {
        int temp = num[i];
        num[i] = num[count - 1 - i];
        num[count - 1 - i] = temp;
    }
}

void Sum(int count, int num[])
{
    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += num[i];
    }
    printf("Sum of the values in the array: %d\n", sum);
    printf("Average of the values in the array: %d\n", sum / count);
}

int main()
{

    printf("How many numbers?\n");
    int count;
    scanf("%d", &count);
    int num[count];
    for (int i = 0; i < count; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &num[i]);
    }
    printf("\n");
    printf("\n");
    Sum(count, num);
    Reverse(count, num);
    Print(count, num);

    return 0;
}