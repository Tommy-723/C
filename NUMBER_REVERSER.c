#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    long long unsigned num;
    printf("What is the number you would like to reverse: ");
    scanf("%lu", &num);
    int digits = 0;
    long long unsigned temp = num;
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    if (digits == 1)
    {
        printf("%llu\n", num);
        return 0;
    }
    long long unsigned reversed = 0;
    temp = num;
    for (int i = 0; i < digits; i++)
    {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    printf("%llu\n", reversed);

    return 0;
}