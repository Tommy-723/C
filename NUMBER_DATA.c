#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

void Sum(int size, int data[])
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += data[i];
    }
    printf("Sum of the values in the data: %d\n", sum);
    printf("Average of the values in the data: %.1f\n", (float)sum / size);
}

int findMode(int arr[], int n)
{
    int maxCount = 0, mode = arr[0];

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
                count++;
        }

        if (count > maxCount)
        {
            maxCount = count;
            mode = arr[i];
        }
    }

    printf("The value repeated the most was %d it was repeated %d times.\n", mode, maxCount);

    return mode;
}

int main()
{
    printf("How many numbers is the data?\n");
    int size;
    scanf("%d", &size);
    int data[size];
    for (int i = 0; i < size; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &data[i]);
    }
    bool con = true;
    while (con)
    {
        printf("\n");
        int max = data[0];
        int min = data[0];
        for (int i = 1; i < size; i++)
        {
            if (max < data[i])
                max = data[i];
            if (min > data[i])
                min = data[i];
        }
        int occurancem = 0;
        for (int i = 0; i < size; i++)
        {
            if (max == data[i])
            {
                occurancem++;
            }
        }
        int occurancemi = 0;
        for (int i = 0; i < size; i++)
        {
            if (min == data[i])
            {
                occurancemi++;
            }
        }

        printf("The max value is: %d and it appeared %d times.\n", max, occurancem);
        printf("The min value is: %d and it appeared %d times.\n", min, occurancemi);
        printf("The range of the values is: %d (%d -- %d) \n", max - min, min, max);
        bool choice = true;
        int sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += data[i];
        }
        Sum(size, data);

        findMode(data, size);

        while (choice)
        {
            printf("What number would you like to check?\n");
            int num;
            int occurance = 0;
            scanf("%d", &num);
            for (int i = 0; i < size; i++)
            {
                if (num == data[i])
                {
                    occurance++;
                }
            }
            printf("The number %d has occured %d times.\n", num, occurance);
            printf("\n");
            printf("If you would like to exit type 0\n");
            int choose;
            scanf("%d", &choose);
            if (choose == 0)
            {
                choice = false;
            }
        }

        printf("Is there a value you would like to change?\n");
        printf("Type 0 if you would like to change anything, if not type any other number\n");
        int chane;
        scanf("%d", &chane);
        bool change = false;
        if (chane == 0)
        {
            change = true;
        }

        while (change)
        {
            printf("Which value would you like to change?\n");
            printf("Type the place of the value (1 - %d): ", size);
            int chaned;
            scanf("%d", &chaned);
            printf("What would you like to change %d to?\n", data[chaned - 1]);
            int value;
            scanf("%d", &value);
            data[chaned - 1] = value;
            printf("Is there anything else you would like to change?\n");
            printf("Type 0 if you would like to change anything, if not type any other number.\n");
            int chane;
            scanf("%d", &chane);
            change = false;
            if (chane == 0)
            {
                change = true;
            }
        }
        printf("Would you like to continue?\n");
        printf("Type 1 if you like to continue or type anything else.\n");
        int contin;
        scanf("%d", &contin);
        if (contin != 1)
        {
            con = false;
        }
    }

    return 0;
}