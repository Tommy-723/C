#include <stdio.h>
#include <string.h>

void Job_Application(char name[], int age, char college_name[], float CGPA, char languages[], int experience, int salary, char P_Number[], char Email[])
{
    printf("Thank You for your cooperation.");
    printf("Here's your copy of your Job Application--->\n\n");
    printf("My name is %s\n", name);
    printf("I am %d years old\n", age);
    printf("I completed my engineering in %s, with a CGPA of : %f\n", college_name, CGPA);
    printf("The coding language/s I know is/are %s.\n", languages);
    printf("I have a experience of %d years\n", experience);
    printf("I am expecting a salary of $%d.\n", salary);
    printf("You can contact me at:\n");
    printf("Phone Number: %s\n", P_Number);
    printf("Email: %s\n", Email);
    printf("Thank you for your time and I hope I'll be working with you soon.");
}

int main()
{

    printf("Welcome to T-Job\n");
    printf("Please enter the following information\n");
    printf("We will submit your application to various companies depending on your profile and  your qualifications.\n");
    printf("You will get a copy of your application.\n");
    char name[50], college_name[50], languages[50], P_Number[11], Email[100];
    int age, experience, salary;
    float CGPA;
    printf("What is your name?\n");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    printf("What is your age?\n");
    scanf("%d", &age);
    if (age < 18)
    {
        printf("You are old enough to be employed\n");
        printf("Please apply after %d years\n", 18 - age);
        return 0;
    }
    getchar();
    printf("Which college did you study in?\n");
    fgets(college_name, sizeof(college_name), stdin);
    college_name[strlen(college_name) - 1] = '\0';
    printf("What is your CGPA\n");
    scanf("%f", &CGPA);
    if (CGPA < 7)
    {
        printf("Your CGPA is upto requirement.\n");
        printf("We are sorry to tell you are not applicable for employment .");
        return 0;
    }
    int lang;
    printf("How many programming languages do you know:");
    scanf("%d", &lang);
    getchar();
    if (lang < 2)
    {
        printf("You are required to know atleast 2 languages\n");
        printf("We are sorry to tell you are not applicable for employment .");
        return 0;
    }
    printf("What programming languages do you know?\n");
    fgets(languages, sizeof(languages), stdin);
    languages[strlen(languages) - 1] = '\0';
    printf("How many years of experince of working on projects do you have?\n");
    scanf("%d", &experience);
    if (experience < 2)
    {
        printf("You are required to have atleast 2 years of experience.\n");
        printf("We are sorry to tell you are not applicable for employment .");
        return 0;
    }
    printf("How much salary are you expecting?\n");
    scanf("%d", &salary);

    getchar();
    printf("What is your phone number: ");
    fgets(P_Number, sizeof(P_Number), stdin);
    P_Number[strlen(P_Number) - 1] = '\0';

    printf("What is your email: ");
    fgets(Email, sizeof(Email), stdin);
    Email[strlen(Email) - 1] = '\0';

    Job_Application(name, age, college_name, CGPA, languages, experience, salary, P_Number, Email);
}