#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int natural(int num);
int square_natural(int num);
int cube_natural(int num);

enum
{
    NORMAL = 1,
    SQUARE = 2,
    CUBE = 3
};

int main()
{
    int OPERATION;
    int exit;
    printf("Welcome to the T-Calculator");
    while (1)
    {
        printf("What function would you like to perfrom?\n");
        printf("Choose from the following\n");
        printf("1- Addition\n");
        printf("2- Subtraction\n");
        printf("3- Multiplication\n");
        printf("4- Division\n");
        printf("5- Power\n");
        printf("6- Average Generator\n");
        printf("7- Divisibility Checker\n");
        printf("8- Sum of Natural Number\n");
        printf("9- Prime Checker\n");
        printf("10- Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &OPERATION);

        switch (OPERATION)
        {
        case 1:
            /*
            THIS IS ADDITION!!!
            THIS IS ADDITION!!!
            THIS IS ADDITION!!!
            THIS IS ADDITION!!!
            THIS IS ADDITION!!!
            */
            printf("Addition!!!\n");
            printf("Continue typing numbers, when you are finished type '0'.\n");
            printf("DECIMAL NUMBERS AND NEGATIVE NUMBERS (they will subtract the sum) ARE ALLOWED.\n");
            float num;
            float sum = 0;
            while (num != 0)
            {
                printf("Number: ");
                scanf("%f", &num);
                sum += num;
            }
            printf("SUM OF THE NUMBERS: %f\n", sum);
            printf("If You Would Like To Continue Type Any Other Number Than 0 or To Exit Type 0\n");
            scanf("%d", &exit);
            if (exit == 0)
            {
                printf("You have exited the T-Calculator!!!\n");
                printf("THANK YOU!!! :)");
                return 0;
            }
            break;

        case 2:
            /*
            THIS IS SUBTRACTION!!!
            THIS IS SUBTRACTION!!!
            THIS IS SUBTRACTION!!!
            THIS IS SUBTRACTION!!!
            THIS IS SUBTRACTION!!!
            */
            // THIS IS ONLY FOR TWO NUMBERS!!!
            // THIS IS ONLY FOR TWO NUMBERS!!!
            // THIS IS ONLY FOR TWO NUMBERS!!!
            // THIS IS ONLY FOR TWO NUMBERS!!!
            // THIS IS ONLY FOR TWO NUMBERS!!!
            printf("Subtration!!!\n");
            printf("THIS IS ONLY FOR TWO NUMBERS!!!\n");
            printf("DECIMAL NUMBERS AND NEGATIVE NUMBERS (they will add) ARE ALLOWED.\n");
            float c, d;
            printf("What is the number a?\n");
            scanf("%f", &c);
            printf("What is the number b?\n");
            scanf("%f", &d);
            float difference = c - d;
            printf("The difference between %f and %f is %f.\n", c, d, difference);
            printf("If You Would Like To Continue Type Any Other Number Than 0 or To Exit Type 0\n");
            scanf("%d", &exit);
            if (exit == 0)
            {
                printf("You have exited the T-Calculator!!!\n");
                printf("THANK YOU!!! :)");
                return 0;
            }
            break;

        case 3:
            /*
            THIS IS MULTIPICATION!!!
            THIS IS MULTIPICATION!!!
            THIS IS MULTIPICATION!!!
            THIS IS MULTIPICATION!!!
            THIS IS MULTIPICATION!!!
            */
            printf("Multiplication!!!\n");
            printf("Continue typing numbers, when you are finished type '0'.\n");
            printf("DECIMAL NUMBERS AND NEGATIVE NUMBERS  ARE ALLOWED.\n");
            float numm = 1;
            float product = 1;
            while (1)
            {
                printf("Number: ");
                scanf("%f", &numm);
                if (numm == 0)
                {
                    break;
                }
                product *= numm;
            }
            printf("PRODUCT OF THE NUMBERS: %f\n", product);
            printf("If You Would Like To Continue Type Any Other Number Than 0 or To Exit Type 0\n");
            scanf("%d", &exit);
            if (exit == 0)
            {
                printf("You have exited the T-Calculator!!!\n");
                printf("THANK YOU!!! :)");
                return 0;
            }
            break;
        case 4:
            /*
            THIS IS DIVISION!!!
            THIS IS DIVISION!!!
            THIS IS DIVISION!!!
            THIS IS DIVISION!!!
            THIS IS DIVISION!!!
            */
            // THIS IS ONLY FOR TWO NUMBERS!!!
            // THIS IS ONLY FOR TWO NUMBERS!!!
            // THIS IS ONLY FOR TWO NUMBERS!!!
            // THIS IS ONLY FOR TWO NUMBERS!!!
            // THIS IS ONLY FOR TWO NUMBERS!!!
            printf("Division!!!\n");
            printf("THIS IS ONLY FOR TWO NUMBERS!!!\n");
            printf("NO DECIMAL NUMBERS OR NEGATIVE NUMBERS.\n");
            int g, h;
            printf("What is the divident: ");
            scanf("%d", &g);
            printf("What is the divisor: ");
            scanf("%d", &h);
            float division = g / h;
            printf("The Quotient of %d and %d is %f.\n", g, h, division);
            printf("If You Would Like To Continue Type Any Other Number Than 0 or To Exit Type 0\n");
            scanf("%d", &exit);
            if (exit == 0)
            {
                printf("You have exited the T-Calculator!!!\n");
                printf("THANK YOU!!! :)");
                return 0;
            }
            break;
        case 5:
            
            // THIS IS THE POWER FUCNTION!!!
            // THIS IS THE POWER FUCNTION!!!
            // THIS IS THE POWER FUCNTION!!!
            // THIS IS THE POWER FUCNTION!!!
            // THIS IS THE POWER FUCNTION!!!
            
            // THIS IS ONLY FOR TWO NUMBERS!!!
            // THIS IS ONLY FOR TWO NUMBERS!!!
            // THIS IS ONLY FOR TWO NUMBERS!!!
            // THIS IS ONLY FOR TWO NUMBERS!!!
            // THIS IS ONLY FOR TWO NUMBERS!!!
            printf("Power Function!!!\n");
            printf("THIS IS ONLY FOR TWO NUMBERS!!!\n");
            printf("NO DECIMAL NUMBERS OR NEGATIVE NUMBERS.\n");
            int i, j;
            printf("What is the base of the power fuction?\n");
            scanf("%d", &i);
            printf("What is the power of the base in the given function?\n");
            scanf("%d", &j);
            int power_fuction = pow(i, j);
            printf("%d to the power %d is %d.\n", i, j, power_fuction);
            printf("If You Would Like To Continue Type Any Other Number Than 0 or To Exit Type 0\n");
            scanf("%d", &exit);
            if (exit == 0)
            {
                printf("You have exited the T-Calculator!!!\n");
                printf("THANK YOU!!! :)");
                return 0;
            }
            break;
        case 6:
            /*
            THIS IS THE AVERAGE GENERATOR!!!
            THIS IS THE AVERAGE GENERATOR!!!
            THIS IS THE AVERAGE GENERATOR!!!
            THIS IS THE AVERAGE GENERATOR!!!
            THIS IS THE AVERAGE GENERATOR!!!
            */
            printf("Average Generator!!!\n");
            printf("Continue typing numbers, when you are finished type '0'.\n");
            printf("NO DECIMAL NUMBERS OR NEGATIVE NUMBERS.\n");
            int count = 0;
            int number;
            int total = 0;
            while (number != 0)
            {
                printf("Number: ");
                scanf("%d", &number);
                if (number == 0)
                {
                    break;
                }
                total += number;
                count++;
            }
            float average = total / count;
            printf("AVERAGE OF THE NUMBERS: %.2f\n", average);
            printf("If You Would Like To Continue Type Any Other Number Than 0 or To Exit Type 0\n");
            scanf("%d", &exit);
            if (exit == 0)
            {
                printf("You have exited the T-Calculator!!!\n");
                printf("THANK YOU!!! :)");
                return 0;
            }
            break;
        case 7:
            /*
            THIS IS THE DIVISIBILITY CHECKER!!!
            THIS IS THE DIVISIBILITY CHECKER!!!
            THIS IS THE DIVISIBILITY CHECKER!!!
            THIS IS THE DIVISIBILITY CHECKER!!!
            THIS IS THE DIVISIBILITY CHECKER!!!
            */
            // THIS IS ONLY FOR TWO NUMBERS!!!
            // THIS IS ONLY FOR TWO NUMBERS!!!
            // THIS IS ONLY FOR TWO NUMBERS!!!
            // THIS IS ONLY FOR TWO NUMBERS!!!
            // THIS IS ONLY FOR TWO NUMBERS!!!
            printf("Divisibility Checker!!!\n");
            printf("THIS IS ONLY FOR TWO NUMBERS!!!\n");
            printf("NO DECIMAL NUMBERS OR NEGATIVE NUMBERS.\n");
            int x, y;
            printf("What number would you like to check for divisibility?\n");
            scanf("%d", &x);
            printf("What number would you like to divide the first number by?\n");
            scanf("%d", &y);
            if (y == 0)
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            else
            {
                int z = x % y;
                if (z == 0)
                {
                    printf("%d is divisible by %d.\n", x, y);
                    printf("%d divided by %d is %d\n", x, y, x / y);
                }
                else
                {
                    printf("%d is not divisible by %d.\n", x, y);
                    printf("%d divided by %d is %d with a remainder of %d\n", x, y, x / y, x % y);
                }
            }
            printf("If You Would Like To Continue Type Any Other Number Than 0 or To Exit Type 0\n");
            scanf("%d", &exit);
            if (exit == 0)
            {
                printf("You have exited the T-Calculator!!!\n");
                printf("THANK YOU!!! :)");
                return 0;
            }
            break;
        case 8:
            /*
            THIS IS THE SUM OF NATURAL NUMBER FUNCTION!!!
            THIS IS THE SUM OF NATURAL NUMBER FUNCTION!!!
            THIS IS THE SUM OF NATURAL NUMBER FUNCTION!!!
            THIS IS THE SUM OF NATURAL NUMBER FUNCTION!!!
            THIS IS THE SUM OF NATURAL NUMBER FUNCTION!!!
            */
            printf("Till what number would you like a sum of?\n");
            int nummm;
            int choice;
            scanf("%d", &nummm);
            bool eh = false;
            while (eh == false)
            {
            printf("What would you like the sum of?\n");
            printf("1- Sum of Natural Numbers\n");
            printf("2- Sum of Squares of Natural Numbers\n");
            printf("3- Sum of Cubes of Natural Numbers\n");
            scanf("%d", &choice);

            switch (choice)
            {
            case NORMAL:
                printf("The sum of natural numbers till %d is %d.\n", nummm, natural(nummm));
                eh = true;
                printf("If You Would Like To Continue Type Any Other Number Than 0 or To Exit Type 0\n");
                scanf("%d", &exit);
                if (exit == 0)
                {
                    printf("You have exited the T-Calculator!!!\n");
                    printf("THANK YOU!!! :)");
                    return 0;
                }
                break;
            case SQUARE:
                printf("The sum of the squares of the natural numbers till %d is %d.\n", nummm, square_natural(nummm));
                eh = true;
                printf("If You Would Like To Continue Type Any Other Number Than 0 or To Exit Type 0\n");
                scanf("%d", &exit);
                if (exit == 0)
                {
                    printf("You have exited the T-Calculator!!!\n");
                    printf("THANK YOU!!! :)");
                    return 0;
                }
                break;
            case CUBE:
                printf("The sum of the cubes of the natural numbers till %d is %d.\n", nummm, cube_natural(nummm));
                eh = true;
                printf("If You Would Like To Continue Type Any Other Number Than 0 or To Exit Type 0\n");
                scanf("%d", &exit);
                if (exit == 0)
                {
                    printf("You have exited the T-Calculator!!!\n");
                    printf("THANK YOU!!! :)");
                    return 0;
                }
                break;
            default:
                printf("Invalid Output\n");
                printf("Please try again\n");
                eh = false;
            }
        }
            break;
        case 9:
            /*
            THIS IS THE PRIME CHECKER!!!
            THIS IS THE PRIME CHECKER!!!
            THIS IS THE PRIME CHECKER!!!
            THIS IS THE PRIME CHECKER!!!
            THIS IS THE PRIME CHECKER!!!
            */
            printf("What is the number you want to check?\n");
            int nummmm;
            bool Prime = true;
            scanf("%d", &nummmm);
            if (nummmm < 2)
            {
                printf("The number is not prime.\n");
                break;
            }
            for (int i = 2; i <= (int)sqrt(nummmm); i++)
            {
                if (nummmm % i == 0)
                {
                    Prime = false;
                    break;
                }
            }
            (Prime) ? printf("%d is a prime number.\n", nummmm) : printf("%d is not a prime number.\n", nummmm);
            printf("If You Would Like To Continue Type Any Other Number Than 0 or To Exit Type 0\n");
            scanf("%d", &exit);
            if (exit == 0)
            {
                printf("You have exited the T-Calculator!!!\n");
                printf("THANK YOU!!! :)");
                return 0;
            }
            break;
        case 10:
            printf("You have exited the T-Calculator!!!\n");
            printf("THANK YOU!!! :)");
            return 0;
            break;
        default:
            printf("INVALID INPUT!!!\n Please try again\n!!!");
            break;
        }
    }

    return 0;
}

int natural(int num)
{
    if (num == 1)
    {
        return 1;
    }
    return natural(num - 1) + num;
}

int square_natural(int num)
{
    return num * (num + 1) * (2 * num + 1) / 6;
}

int cube_natural(int num)
{
    int sum = num * (num + 1) / 2;
    return sum * sum;
}