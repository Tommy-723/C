#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("Enter the number you want to check from:\n");
    int a;
    scanf("%d", &a);
    printf("Enter the number you want to check till:\n");
    int b;
    scanf("%d", &b);
    for (int num = a; num <= b; num++)
    {
        if (num <= 1)
        {
            continue;
        }
        else
        {
            int is_prime = 1;
            for (int i = 2; i < num; i++)
            {
                if (num % i == 0)
                {
                    is_prime = 0;

                    break;
                }
            }
            if (is_prime)
            {
                printf("%d is a prime number.\n", num);
            }
        }
    }

    return 0;
}