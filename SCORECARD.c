#include <stdio.h>
typedef enum
{
    MATH,
    ENGLISH,
    PHYSICS,
    CHEMISTRY,
    PHYSICAL
} SUBJECTS;

enum Standard
{
    TWELTH = 2,
    TENTH = 1
};
float Percentage(int Subjects_Scores[5]);

int main()
{
    int failed = 0;
    char Subjects[5][100] = {"Math", "English", "Physics", "Chemistry", "Physical"};
    char Grades[8][100] = {"Fail", "D", "C", "C+", "B", "B+", "A", "A+"};
    int Subjects_Scores[5];
    int standardInput;
    printf("What Standard are you in?\n");
    printf("Type 1 for 10th standard and Type 2 for 12th standard:");
    if (scanf("%d", &standardInput) != 1 || (standardInput != 1 && standardInput != 2))
    {
        printf("Invalid Standard Input\n");
        return 1;
    }
    printf("Please enter the marks you received for each subject\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s:", Subjects[i]);
        if (scanf("%d", &Subjects_Scores[i]) != 1)
        {
            printf("Invalid marks input for %s. Please enter a valid integer between 0 and 100.\n", Subjects[i]);
        }
        if (Subjects_Scores[i] < 0 || Subjects_Scores[i] > 100)
        {
            printf("Invalid marks input for %s. Please enter a number between 0 and 100.\n", Subjects[i]);
            return 1;
        }
    }

    int x = 0;

    while (x <= 4)
    {
        if (Subjects_Scores[x] >= 0 && Subjects_Scores[x] < 33)
        {
            printf("Your grade in %s is : %s\n", Subjects[x], Grades[0]);
        }
        else if (Subjects_Scores[x] >= 33 && Subjects_Scores[x] < 40)
        {
            printf("Your grade in %s is : %s\n", Subjects[x], Grades[1]);
        }
        else if (Subjects_Scores[x] >= 40 && Subjects_Scores[x] < 50)
        {
            printf("Your grade in %s is : %s\n", Subjects[x], Grades[2]);
        }
        else if (Subjects_Scores[x] >= 50 && Subjects_Scores[x] < 60)
        {
            printf("Your grade in %s is : %s\n", Subjects[x], Grades[3]);
        }
        else if (Subjects_Scores[x] >= 60 && Subjects_Scores[x] < 70)
        {
            printf("Your grade in %s is : %s\n", Subjects[x], Grades[4]);
        }
        else if (Subjects_Scores[x] >= 70 && Subjects_Scores[x] < 80)
        {
            printf("Your grade in %s is : %s\n", Subjects[x], Grades[5]);
        }
        else if (Subjects_Scores[x] >= 80 && Subjects_Scores[x] < 90)
        {
            printf("Your grade in %s is : %s\n", Subjects[x], Grades[6]);
        }
        else if (Subjects_Scores[x] >= 90 && Subjects_Scores[x] <= 100)
        {
            printf("Your grade in %s is : %s\n", Subjects[x], Grades[7]);
        }
        else
        {
            printf("Invalid Input\n");
        }
        x++;
    }

    if (standardInput == TENTH)
    {
        float perc = Percentage(Subjects_Scores);
        printf("Your Percentage is: %.2f %% in 10th standard\n", perc);

        if (perc >= 0 && perc < 33)
        {
            printf("Your Grade you received in 10th standard is: %s\n", Grades[0]);
        }
        else if (perc >= 33 && perc < 40)
        {
            printf("Your Grade you received in 10th standard is: %s\n", Grades[1]);
        }
        else if (perc >= 40 && perc < 50)
        {
            printf("Your Grade you received in 10th standard is: %s\n", Grades[2]);
        }
        else if (perc >= 50 && perc < 60)
        {
            printf("Your Grade you received in 10th standard is: %s\n", Grades[3]);
        }
        else if (perc >= 60 && perc < 70)
        {
            printf("Your Grade you received in 10th standard is: %s\n", Grades[4]);
        }
        else if (perc >= 70 && perc < 80)
        {
            printf("Your Grade you received in 10th standard is: %s\n", Grades[5]);
        }
        else if (perc >= 80 && perc < 90)
        {
            printf("Your Grade you received in 10th standard is: %s\n", Grades[6]);
        }
        else if (perc >= 90 && perc <= 100)
        {
            printf("Your Grade you received in 10th standard is: %s\n", Grades[7]);
        }
        else
        {
            printf("Invalid Percentage Input\n");
        }

        if (Percentage(Subjects_Scores) < 33 || Subjects_Scores[0] < 33 || Subjects_Scores[1] < 33 || Subjects_Scores[2] < 33 || Subjects_Scores[3] < 33 || Subjects_Scores[4] < 33)
        {
            for (int i = 0; i < 5; i++)
            {
                if (Subjects_Scores[i] < 33)
                {
                    failed++;
                }
            }
            printf("You have failed in %d subjects\n", failed);
            if (failed > 1)
            {
                printf("YOU HAVE FAILED!!! :(\nPLEASE TRY AGAIN NEXT YEAR!!!\nBETTER LUCK NEXT TIME\n");
            }
            if (failed == 1)
            {
                printf("YOU HAVE FAILED!!! :(\nPLEASE TRY AGAIN!!!\nBETTER LUCK NEXT TIME\n");
            }
        }
        else
        {
            printf("YOU HAVE PASSED!!! :)\n");
        }
    }

    else if (standardInput == TWELTH)
    {
        float perc = Percentage(Subjects_Scores);
        printf("Your Percentage is: %.2f %% in 12th standard\n", perc);

        if (perc >= 0 && perc < 33)
        {
            printf("Your Grade you received in 12th standard is: %s\n", Grades[0]);
        }
        else if (perc >= 33 && perc < 40)
        {
            printf("Your Grade you received in 12th standard is: %s\n", Grades[1]);
        }
        else if (perc >= 40 && perc < 50)
        {
            printf("Your Grade you received in 12th standard is: %s\n", Grades[2]);
        }
        else if (perc >= 50 && perc < 60)
        {
            printf("Your Grade you received in 12th standard is: %s\n", Grades[3]);
        }
        else if (perc >= 60 && perc < 70)
        {
            printf("Your Grade you received in 12th standard is: %s\n", Grades[4]);
        }
        else if (perc >= 70 && perc < 80)
        {
            printf("Your Grade you received in 12th standard is: %s\n", Grades[5]);
        }
        else if (perc >= 80 && perc < 90)
        {
            printf("Your Grade you received in 12th standard is: %s\n", Grades[6]);
        }
        else if (perc >= 90 && perc <= 100)
        {
            printf("Your Grade you received in 12th standard is: %s\n", Grades[7]);
        }
        else
        {
            printf("Invalid Percentage Input\n");
        }

        if (Percentage(Subjects_Scores) < 33 || Subjects_Scores[0] < 33 || Subjects_Scores[1] < 33 || Subjects_Scores[2] < 33 || Subjects_Scores[3] < 33 || Subjects_Scores[4] < 33)
        {
            for (int i = 0; i < 5; i++)
            {
                if (Subjects_Scores[i] < 33)
                {
                    failed++;
                }
            }
            printf("You have failed in %d subjects\n", failed);
            if (failed > 1)
            {
                printf("YOU HAVE FAILED!!! :(\nPLEASE TRY AGAIN NEXT YEAR!!!\nBETTER LUCK NEXT TIME\n");
            }
            if (failed == 1)
            {
                printf("YOU HAVE FAILED!!! :(\nPLEASE TRY AGAIN!!!\nBETTER LUCK NEXT TIME\n");
            }
        }
        else
        {
            printf("YOU HAVE PASSED!!! :)\n");
        }
    }
    else
    {
        printf("Invalid Standard Input\n");
    }

    return 0;
}

float Percentage(int Subjects_Scores[5])
{
    return (Subjects_Scores[0] + Subjects_Scores[1] + Subjects_Scores[2] + Subjects_Scores[3] + Subjects_Scores[4]) * 0.2;
}