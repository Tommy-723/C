#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

typedef struct c
{
    double real;
    double imaginary;
} Complex;

void display(Complex c)
{
    printf("The value of Complex number is %.0f + %.0fi \n", c.real, c.imaginary);
}

void magnitude(Complex c)
{
    printf("The magnitude of the vector is %.2f \n", sqrt(pow(c.real, 2) + pow(c.imaginary, 2)));
}

int main()
{
    printf("How many vectors: \n");
    int v;
    scanf("%d", &v);

    Complex com[v];
    double sumx = 0;
    double sumy = 0;
    for (int i = 0; i < v; i++)
    {
        printf("Enter real part \n");
        scanf("%lf", &com[i].real);
        printf("Enter imaginary part \n");
        scanf("%lf", &com[i].imaginary);
        display(com[i]);
        magnitude(com[i]);
    }
    for (int i = 0; i < v; i++)
    {
        sumx += com[i].real;
        sumy += com[i].imaginary;
    }
    printf("The sum of all the complex numbers gives %.0f + %.0fi \n", sumx, sumy);

    return 0;
}