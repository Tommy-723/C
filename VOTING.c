#include <stdio.h>
#include <stdbool.h>

enum age
{
    ADULT = 18
};
void voting(bool **pp_TAX)
{
    printf("You are old enough to vote.\n");
    if (**pp_TAX)
    {
        printf("You have payed your taxes as well.\n");
        printf("Hence, You are applicable for Voting!!!\n");
    }
    else
    {
        printf("You have not payed your taxes. \n");
        printf("Hence, You are not applicable for Voting!!!\n");

        printf("How much money do you make annually?");
        int income;
        scanf("%d", &income);
        if (income > 0 && income <= 300000)
        {
            printf("You don't have to pay taxes");
            printf("Hence, You are applicable for Voting!!!\n");
        }
        else if (income > 300000 && income <= 600000)
        {
            printf("You have to pay %.2f rupees\n", (float)income * 5 / 100);
            printf("Please pay your taxes as early as possible.\n");
            printf("Then you will be applicable for voting.\n");
        }
        else if (income > 600000 && income <= 900000)
        {
            printf("You have to pay %.2f rupees\n", (float)income * 10 / 100);
            printf("Please pay your taxes as early as possible.\n");
            printf("Then you will be applicable for voting.\n");
        }
        else if (income > 900000 && income <= 1200000)
        {
            printf("You have to pay %.2f rupees\n", (float)income * 15 / 100);
            printf("Please pay your taxes as early as possible.\n");
            printf("Then you will be applicable for voting.\n");
        }
        else if (income > 1200000 && income <= 1500000)
        {
            printf("You have to pay %.2f rupees\n", (float)income * 20 / 100);
            printf("Please pay your taxes as early as possible.\n");
            printf("Then you will be applicable for voting.\n");
        }
        else if (income > 1500000)
        {
            printf("You have to pay %.2f rupees\n", (float)income * 30 / 100);
            printf("Please pay your taxes as early as possible.\n");
            printf("Then you will be applicable for voting.\n");
        }
    }
}

int main()
{
    int age;
    int TAXES;
    bool TAX;
    printf("What is your age?\n");
    scanf("%d", &age);
    if (age < 0)
    {
        printf("Invalid age entered.\n");
        return 0;
    }
    else if (age > 0 && age < ADULT)
    {
        printf("You are not old enough to vote!!!\n");
        printf("Hence, You are not applicable for Voting!!!\n");
        return 0;
    }
    printf("Have you paid your taxes?\n");
    printf("Type 1 for yes and Type 2 for no: ");
    scanf("%d", &TAXES);
    if (TAXES == 1)
    {
        TAX = true;
    }
    else if (TAXES == 2)
    {
        TAX = false;
    }
    else
    {
        printf("Invalid input for taxes. Please enter 1 or 2.\n");
        return 0;
    }
    bool *p_TAX = &TAX;
    bool **pp_TAX = &p_TAX;
    voting(pp_TAX);
    return 0;
}