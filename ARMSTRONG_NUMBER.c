#include <stdio.h>
#include <math.h>

int main()
{
    printf("Which number would you like to check: ");
    int number;
    scanf("%d", &number);
    int digits = 0;
    int temp = number;
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }
    printf("%d digits\n", digits);
    int sum = 0;
    temp = number;
    while (temp != 0)
    {
        sum += (int)pow(temp % 10, digits);
        temp /= 10;
    }
    (sum == number) ? printf("It is a Armstrong number\n") : printf("It is not a Armstrong number\n");
    return 0;
}