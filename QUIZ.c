#include <stdio.h>
typedef char quiz;
int main()
{
    int choice;
    int score = 0;
    printf("SOLAR SYSTEM QUIZ!!!\n");
    printf("There will be 6 questions, each with 4 options, type the number corresponding to your answer to choose.\n");
    quiz Questions[6][100] = {"What is the largest planet in the solar system?", "What is the 4th planet in the solar system?", "What is the hottest planet in the solar system?", "What is the only other planet except earth that might support life in the solar system?", "Which planet has the most moons in the solar system?", "Which planet in the solor system can float on water?"};
    quiz options[6][100] = {"1- Earth\n2- Mercury\n3- Jupiter\n4- Venus", "1- Jupiter\n2- Mercury\n3- Earth\n4- Mars", "1- Venus\n2- Mercury\n3- Uranus\n4- Neptune", "1- Jupiter\n2- Mars\n3- Venus\n4- Neptune", "1- Mercury\n2- Earth\n3- Venus\n4- Jupiter", "1- Jupiter\n2- Saturn\n3- Venus\n4- Mercury"};
    int answer[6] = {3, 4, 1, 2, 4, 2};
    quiz comment[7][100] = {"Terrible!!!\n", "Bad!!!\n", "Poor!!!\n", "Ok", "Good!!!\n", "Great!!!\n", "Amazing!!!\n"};
    int x = 0;
    while (x < sizeof(Questions) / sizeof(Questions[0]))
    {
        printf("%s\n", Questions[x]);
        printf("%s\n", options[x]);
        scanf("%d", &choice);
        (choice == answer[x]) ? printf("Correct ANSWER\n"), score++ : printf("Wrong ANSWER\n");
        x++;
    }
    printf("%s", comment[score]);
    printf("Your score is %d out of 6!!!\n", score);
    return 0;
}