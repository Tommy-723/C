#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

typedef struct
{
    char Name[100];
    int Number;
    char Building[100];
    char City[100];
    char State[100];
    char Country[100];
    char P_Number[11];
    char Email[100];
} Address;

void Print(int People, Address Person[])
{
    for (int i = 0; i < People; i++)
    {
        printf("%s's address is: %s, %d, %s, %s, %s.\nYou can contact him/her/they at:\nPhone: %s\nEmail: %s\n", Person[i].Name, Person[i].Building, Person[i].Number, Person[i].City, Person[i].State, Person[i].Country, Person[i].P_Number, Person[i].Email);
        printf("\n\n");
    }
}

int main()
{
    int People;
    printf("How many people do you want to store the information of: ");
    scanf("%d", &People);
    getchar();

    Address Person[People];
    for (int i = 0; i < People; i++)
    {
        printf("What is name of person %d\n", i + 1);
        fgets(Person[i].Name, sizeof(Person[i].Name), stdin);
        Person[i].Name[strlen(Person[i].Name) - 1] = '\0';

        printf("What is the house number of %s\n", Person[i].Name);
        scanf("%d", &Person[i].Number);

        getchar();
        printf("What is the name of the place %s is staying at\n", Person[i].Name);
        fgets(Person[i].Building, sizeof(Person[i].Building), stdin);
        Person[i].Building[strlen(Person[i].Building) - 1] = '\0';

        printf("Which city is %s staying in\n", Person[i].Name);
        fgets(Person[i].City, sizeof(Person[i].City), stdin);
        Person[i].City[strlen(Person[i].City) - 1] = '\0';

        printf("Which state %s staying in\n", Person[i].Name);
        fgets(Person[i].State, sizeof(Person[i].State), stdin);
        Person[i].State[strlen(Person[i].State) - 1] = '\0';

        printf("Which country is %s staying in\n", Person[i].Name);
        fgets(Person[i].Country, sizeof(Person[i].Country), stdin);
        Person[i].Country[strlen(Person[i].Country) - 1] = '\0';

        printf("What is the phone number of  %s\n", Person[i].Name);
        fgets(Person[i].P_Number, sizeof(Person[i].P_Number), stdin);
        Person[i].P_Number[strlen(Person[i].P_Number) - 1] = '\0';

        printf("What is email of  %s\n", Person[i].Name);
        fgets(Person[i].Email, sizeof(Person[i].Email), stdin);
        Person[i].Email[strlen(Person[i].Email) - 1] = '\0';
    }
    Print(People, Person);

    return 0;
}
