#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    printf("LCM AND HCF FINDER\n");

    printf("Enter the first number: \n");
    int f;
    scanf("%d", &f);
    printf("Enter the second number: \n");
    int s;
    scanf("%d", &s);

    int min = (f > s) ? f : s;
    int max = f * s;
    int LCM = 0;

    for (int i = min; i <= max; i++)
        if (i % f == 0 && i % s == 0)
        {
            LCM = i;
            break;
        }
    printf("LCM: %d\n", LCM);
    int HCF1 = f * s / LCM;
    int HCF2 = 0;
    for (int i = 1; i < min; i++)
    {
        if (f % i == 0 && s % i == 0)
        {
            HCF2 = i;
        }
    }
    if (HCF1 == HCF2)
    {
        printf("HCF: %d\n", HCF1);
    }
    else
    {
        printf("HCF: Invalid\n");
    }

    return 0;
}