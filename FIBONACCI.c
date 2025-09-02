#include <stdio.h>
int FIBONACCI(int num);
int main()
{
    int num;
    printf("Which number of the Fibonacci Sequence do you want: ");
    scanf("%d", &num);
    printf("The %dth number of the Fibonacci Sequence is %d, ", num, FIBONACCI(num));
}

int FIBONACCI(int num)
{
    if (num == 1)
    {
        return 0;
    }
    if (num == 2)
    {
        return 1;
    }
    int Fib1 = FIBONACCI(num - 1) + FIBONACCI(num - 2);
    return Fib1;
}