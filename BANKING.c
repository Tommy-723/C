#include <stdio.h>
#include <string.h>
#include <math.h>
typedef enum
{
    BALANCES = 1,
    DEPOSIT = 2,
    WITHDRAW = 3,
    TRANSFER = 4,
    INTEREST = 5,
    EXIT = 6
} choice_t;

int main()
{
    float BALANCE;
    printf("Welcome To The T-Bank!!!\n");
    char pass1[20] = "TOMMY!";
    char acc1[20] = "Tommy";
    float BALANCE1 = 100000;
    char pass2[20] = "GUNDU!";
    char acc2[20] = "Gundu";
    float BALANCE2 = 200000;
    char pass3[20] = "PICHI!";
    char acc3[20] = "Pichi";
    float BALANCE3 = 300000;
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
                    BALANCE = BALANCE1;
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
                    BALANCE = BALANCE2;
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
                    BALANCE = BALANCE3;
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

    printf("What would you like to do today?\n");
    int choice;
    while (1)
    {
        printf("Please Choose (1-5)\n");
        printf("1-View Balance\n");
        printf("2-Deposit Money\n");
        printf("3-Withdraw Money\n");
        printf("4- Transfer Money\n");
        printf("5-View our interest Program\n");
        printf("6-Exit\n");

        scanf("%d", &choice);

        switch (choice)
        {
        case BALANCES:
            if (BALANCE <= 0)
            {
                printf("You are bankrupt!!!\n");
                printf("Please file for BANKRUPTCY and clear your account as soon as possible");
            }
            else
            {
                printf("Your balance is %.2f rupess\n", BALANCE);
            }
            break;

        case DEPOSIT:
        {
            printf("Please Choose the amount of money you would like to deposit:\n");
            float deposit;
            scanf("%f", &deposit);
            BALANCE += deposit;
            printf("MONEY HAS BEEN DEPOSITED!!!\n");
            printf("Your balance is now %.2f rupess\n", BALANCE);
            break;
        }

        case WITHDRAW:
        {
            printf("Please Choose the amount of money you would like to withdraw:\n");
            float withdrawl;
            scanf("%f", &withdrawl);
            if (withdrawl > BALANCE)
            {
                printf("Insufficient Funds\n");
                printf("Your balance is only %.2f rupess\n", BALANCE);
            }
            else
            {
                BALANCE -= withdrawl;
                printf("MONEY HAS BEEN WITHDRAWN!!!\n");
                printf("Your balance is now %.2f rupess\n", BALANCE);
            }
            break;
        }

        case TRANSFER:
        {
            float transfer;
            char person[100];
            getchar();
            printf("Who would you like to send the money to:");
            fgets(person, sizeof(person), stdin);
            person[strlen(person) - 1] = '\0';
            printf("Please Choose the amount of money you would like to transfer:\n");
            scanf("%f", &transfer);
            if (transfer > BALANCE)
            {
                printf("Insufficient Funds\n");
                printf("Your balance is only %.2f rupess\n", BALANCE);
            }
            else
            {
                BALANCE -= transfer;
                printf("MONEY HAS BEEN TRANSFERED TO %s!!!\n", person);
                printf("Your balance is now %.2f rupess\n", BALANCE);
            }
            break;
        }

        case INTEREST:
        { /*
         INTEREST
         INTEREST
         INTEREST
         INTEREST
         INTEREST
         */
            printf("How much money are you planning to keep in the bank: ₹\n");
            float amount;
            scanf("%f", &amount);
            printf("How many years will you keep it in the bank: \n");
            int years;
            scanf("%d", &years);
            printf("What is the interest rate: ");
            float interest;
            scanf("%f", &interest);
            printf("What type of interest is it? (1 for simple, 2 for compound): ");
            int type;
            scanf("%d", &type);
            if (type == 1)
            {
                float simple_interest = amount * interest * years / 100;
                printf("The simple interest is: ₹%.2f\n", simple_interest);
                printf("The total amount after %d years is: ₹%.2f\n", years, amount + simple_interest);
            }
            else if (type == 2)
            {
                printf("The compound interest is: ₹%.2f\n", amount * pow(1 + interest / 100, years) - amount);
                printf("The total amount after %d years is: ₹%.2f\n", years, amount * pow(1 + interest / 100, years));
            }
            else
            {
                printf("Invalid interest type selected.\n");
            }
        }
        break;

        case EXIT:
            printf("You have exited from the Bank.\n");
            return 0;
            break;

        default:
            printf("Invalid Output\n");
            printf("Type Again\n");
            break;
        }
    }
    return 0;
}