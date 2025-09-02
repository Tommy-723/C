#include <stdio.h>
int main()
{
    int x = 1;
    int y = 1;
    for (x = 1; x <= 10; x++)
    {
        for (y = 1; y <= 10; y++)
        {
            printf("%4d", x * y);
        }
        printf("\n");
    }

    return 0;
}