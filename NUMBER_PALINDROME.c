#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    long long unsigned num;
    printf("What is the number you would like to test: ");
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
        printf("The number is a PALINDROME\n");
        return 0;
    }
    long long unsigned reversed = 0;
    temp = num;
    for (int i = 0; i < digits; i++)
    {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    (reversed == num) ? printf("%llu is a PALINDROME\n", num) : printf("%llu is NOT a PALINDROME\n", num);

    return 0;
}