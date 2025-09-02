#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main()
{
  printf("What is your weight  on earth?\n");
  float weight;
  scanf("%f", &weight);
  printf("Your weight on Mercury is: %.2f\n", weight * 0.38);
  printf("Your weight on Venus is: %.2f\n", weight * 0.91);
  printf("Your weight on Earth is: %.2f\n", weight);
  printf("Your weight on Mars is: %.2f\n", weight * 0.38);
  printf("Your weight on Jupiter is: %.2f\n", weight * 2.35);
  printf("Your weight on Saturn is: %.2f\n", weight * 1.06);
  printf("Your weight on Uranus is: %.2f\n", weight * 0.89);
  printf("Your weight on Neptune is: %.2f\n", weight * 1.12);
  printf("Your weight on Pluto is: %.2f\n", weight * 0.063);
  printf("Your weight on the Moon is: %.2f\n", weight * 0.165);
  printf("Your weight on the Sun is: %.2f\n", weight * 27.9);

  return 0;
}