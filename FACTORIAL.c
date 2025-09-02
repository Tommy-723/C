
#include <stdio.h>

int factorial_(int num);

int main()
{
    printf("Enter till which number you want a factorial of:\n");
    int num;
    scanf("%d", &num);

    printf("The factorial of %d is %d\n", num, factorial_(num));

    int i = 1;
    int factorial = 1;
    while (i <= num)
    {
        factorial *= i;
        i++;
    }
    printf("The factorial of %d is %d\n", num, factorial);

    return 0;
}

int factorial_(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    return num * factorial_(num - 1);
}