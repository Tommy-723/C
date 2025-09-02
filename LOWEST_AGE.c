#include <stdio.h>

double lowest_age(double age)
{
    return (age / 2) + 7;
}

int main()
{
    double age;
    printf("What is your age?\n");
    scanf("%lf", &age);
    if (age < 14)
    {
        printf("You are not allowed to date.");
        printf("GO TO FUCKING SCHOOL!!! \nYOU STUPID FUCKING KID!!!");
    }
    printf("The lowest age you can date is: %.1lf years\n", lowest_age(age));
}