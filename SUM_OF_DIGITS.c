#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int num;
    printf("What number do you want to check: ");
    scanf("%d", &num);
    int sum = 0;
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }

    printf("The sum of the digits of the number is %d\n", sum);

    return 0;
}