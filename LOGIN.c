#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    printf("Welcome To The T-Bank!!!\n");
    char pass1[20] = "TOMMY!";
    char acc1[20] = "Tommy";

    char pass2[20] = "GUNDU!";
    char acc2[20] = "Gundu";

    char pass3[20] = "PICHI!";
    char acc3[20] = "Pichi";

    while (1)
    {
        printf("What is the name of your account ?\n");
        char account[20];
        fgets(account, sizeof(account), stdin);
        account[strlen(account) - 1] = '\0';
        if (strcmp(acc1, account) == 0)
        {
            printf("Account Found!!!\n");
            printf("Now Please enter your password\n");
            int fail = 0;
            while (1)
            {

                printf("What is your password?\n");
                char password[20];
                fgets(password, sizeof(password), stdin);
                password[strlen(password) - 1] = '\0';
                if (strcmp(pass1, password) == 0)
                {
                    printf("Login Successfull\n");
                    break;
                }
                else
                {
                    printf("Wrong Password!!!\n");
                    printf("Login Failed\n");
                    fail++;
                }

                if (fail > 5)
                {
                    printf("You have entered the wrong too many times.\n");
                    printf("Please try again later.\n");
                    return 0;
                }
            }
            break;
        }
        else if (strcmp(acc2, account) == 0)
        {
            printf("Account Found!!!\n");
            printf("Now Please enter your password\n");
            int fail = 0;
            while (1)
            {

                printf("What is your password?\n");
                char password[20];
                fgets(password, sizeof(password), stdin);
                password[strlen(password) - 1] = '\0';
                if (strcmp(pass2, password) == 0)
                {
                    printf("Login Successfull\n");
                    break;
                }
                else
                {
                    printf("Wrong Password!!!\n");
                    printf("Login Failed\n");
                    fail++;
                }

                if (fail > 5)
                {
                    printf("You have entered the wrong too many times.\n");
                    printf("Please try again later.\n");
                    return 0;
                }
            }
            break;
        }
        else if (strcmp(acc3, account) == 0)
        {
            printf("Account Found!!!\n");
            printf("Now Please enter your password\n");
            int fail = 0;
            while (1)
            {

                printf("What is your password?\n");
                char password[20];
                fgets(password, sizeof(password), stdin);
                password[strlen(password) - 1] = '\0';
                if (strcmp(pass3, password) == 0)
                {
                    printf("Login Successfull\n");
                    break;
                }
                else
                {
                    printf("Wrong Password!!!\n");
                    printf("Login Failed\n");
                    fail++;
                }

                if (fail > 5)
                {
                    printf("You have entered the wrong password too many times.\n");
                    printf("Please try again later.\n");
                    return 0;
                }
            }
            break;
        }

        else
        {
            printf("No Account Found!!!\n");
            printf("Please Try Again.\n");
        }
    }

    return 0;
}