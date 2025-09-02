#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

typedef struct
{
    int x;
    int y;
} vector;

void sum(int num, vector vector_n[num], int *p_xsum, int *p_ysum)
{

    for (int i = 0; i < num; i++)
    {
        *p_xsum += vector_n[i].x;
        *p_ysum += vector_n[i].y;
    }
}

void product(int num, vector vector_n[num], int *p_xsum, int *p_ysum)
{

    for (int i = 0; i < num; i++)
    {
        *p_xsum *= vector_n[i].x;
        *p_ysum *= vector_n[i].y;
    }
}

int main()
{
    printf("What do you want to do with the vectors.?\n");
    printf("Type 1 for addition\n");
    printf("Type 2 for (scalar) multiplication\n");
    int choice;
    scanf("%d", &choice);

    if (choice == 1)
    {
        int xsum = 0;
        int *p_xsum = &xsum;
        int ysum = 0;
        int *p_ysum = &ysum;
        printf("How many vectors would you like to add together: ");
        int num;
        scanf("%d", &num);
        if (num <= 0)
        {
            printf("Number of vectors must be greater than 0.\n");
            return 1;
        }
        vector vector_n[num];
        for (int i = 0; i < num; i++)
        {
            printf("What is the x coordinate of vector %d: ", i + 1);
            scanf("%d", &vector_n[i].x);
            printf("What is the y coordinate of vector %d: ", i + 1);
            scanf("%d", &vector_n[i].y);
        }
        sum(num, vector_n, p_xsum, p_ysum);
        printf("The sum of the vector gives(%d, %d)\n", xsum, ysum);
    }
    else if (choice == 2)
    {
        int xproduct = 1;
        int *p_xproduct = &xproduct;
        int yproduct = 1;
        int *p_yproduct = &yproduct;
        printf("How many vectors would you like to multiply together: ");
        int num;
        scanf("%d", &num);
        if (num <= 0)
        {
            printf("Number of vectors must be greater than 0.\n");
            return 1;
        }
        vector vector_n[num];
        for (int i = 0; i < num; i++)
        {
            printf("What is the x coordinate of vector %d: ", i + 1);
            scanf("%d", &vector_n[i].x);
            printf("What is the y coordinate of vector %d: ", i + 1);
            scanf("%d", &vector_n[i].y);
        }
        product(num, vector_n, p_xproduct, p_yproduct);
        printf("The product of the vector gives(%d, %d)\n", xproduct, yproduct);
    }
    else
    {
        printf("Invalid choice. Please enter 1 or 2.\n");
        return 1;
    }

    return 0;
}