#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.14159265

void clearScreen() {
    printf("\n----------------------------\n");
}

void pause() {
    printf("\nPress Enter to continue...");
    getchar(); getchar();
}

void area2D() {
    int choice;
    float area, a, b, h, r;

    clearScreen();
    printf("------ AREA CALCULATOR (2D Shapes) ------\n");
    printf("1. Square\n2. Rectangle\n3. Circle\n4. Triangle\n5. Parallelogram\n6. Trapezium\n");
    printf("Choose a shape (1-6): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: printf("Enter side length: ");
                scanf("%f", &a);
                area = a * a;
                printf("Area of Square = %.2f\n", area);
                break;
        case 2: printf("Enter length and breadth: ");
                scanf("%f %f", &a, &b);
                area = a * b;
                printf("Area of Rectangle = %.2f\n", area);
                break;
        case 3: printf("Enter radius: ");
                scanf("%f", &r);
                area = PI * r * r;
                printf("Area of Circle = %.2f\n", area);
                break;
        case 4: printf("Enter base and height: ");
                scanf("%f %f", &a, &h);
                area = 0.5 * a * h;
                printf("Area of Triangle = %.2f\n", area);
                break;
        case 5: printf("Enter base and height: ");
                scanf("%f %f", &a, &h);
                area = a * h;
                printf("Area of Parallelogram = %.2f\n", area);
                break;
        case 6: printf("Enter base1, base2 and height: ");
                scanf("%f %f %f", &a, &b, &h);
                area = 0.5 * (a + b) * h;
                printf("Area of Trapezium = %.2f\n", area);
                break;
        default: printf("Invalid choice!\n"); return;
    }
    pause();
}

void area3D() {
    int choice;
    float area, a, b, h, r, l, base_area, perimeter;

    clearScreen();
    printf("------ SURFACE AREA CALCULATOR (3D Shapes) ------\n");
    printf("1. Cube\n2. Cuboid\n3. Sphere\n4. Cylinder\n5. Cone\n6. Prism\n");
    printf("Choose a shape (1-6): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: printf("Enter side length: ");
                scanf("%f", &a);
                area = 6 * a * a;
                printf("Surface Area of Cube = %.2f\n", area);
                break;
        case 2: printf("Enter length, width and height: ");
                scanf("%f %f %f", &a, &b, &h);
                area = 2 * (a*b + b*h + a*h);
                printf("Surface Area of Cuboid = %.2f\n", area);
                break;
        case 3: printf("Enter radius: ");
                scanf("%f", &r);
                area = 4 * PI * r * r;
                printf("Surface Area of Sphere = %.2f\n", area);
                break;
        case 4: printf("Enter radius and height: ");
                scanf("%f %f", &r, &h);
                area = 2 * PI * r * (r + h);
                printf("Surface Area of Cylinder = %.2f\n", area);
                break;
        case 5: printf("Enter radius and slant height: ");
                scanf("%f %f", &r, &l);
                area = PI * r * (r + l);
                printf("Surface Area of Cone = %.2f\n", area);
                break;
        case 6: printf("Enter base area and perimeter and height: ");
                scanf("%f %f %f", &base_area, &perimeter, &h);
                area = 2 * base_area + perimeter * h;
                printf("Surface Area of Prism = %.2f\n", area);
                break;
        default: printf("Invalid choice!\n"); return;
    }
    pause();
}

void volume3D() {
    int choice;
    float volume, a, b, h, r, l;

    clearScreen();
    printf("------ VOLUME CALCULATOR (3D Shapes) ------\n");
    printf("1. Cube\n2. Cuboid\n3. Sphere\n4. Cylinder\n5. Cone\n6. Prism\n");
    printf("Choose a shape (1-6): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: printf("Enter side length: ");
                scanf("%f", &a);
                volume = a * a * a;
                printf("Volume of Cube = %.2f\n", volume);
                break;
        case 2: printf("Enter length, width and height: ");
                scanf("%f %f %f", &a, &b, &h);
                volume = a * b * h;
                printf("Volume of Cuboid = %.2f\n", volume);
                break;
        case 3: printf("Enter radius: ");
                scanf("%f", &r);
                volume = (4.0/3.0) * PI * pow(r, 3);
                printf("Volume of Sphere = %.2f\n", volume);
                break;
        case 4: printf("Enter radius and height: ");
                scanf("%f %f", &r, &h);
                volume = PI * r * r * h;
                printf("Volume of Cylinder = %.2f\n", volume);
                break;
        case 5: printf("Enter radius and height: ");
                scanf("%f %f", &r, &h);
                volume = (1.0/3.0) * PI * r * r * h;
                printf("Volume of Cone = %.2f\n", volume);
                break;
        case 6: printf("Enter base area and height: ");
                scanf("%f %f", &a, &h);
                volume = a * h;
                printf("Volume of Prism = %.2f\n", volume);
                break;
        default: printf("Invalid choice!\n"); return;
    }
    pause();
}

int main() {
    int option;

    do {
        clearScreen();
        printf("========= AREA & VOLUME CALCULATOR =========\n");
        printf("1. Area of 2D Shapes\n");
        printf("2. Surface Area of 3D Shapes\n");
        printf("3. Volume of 3D Shapes\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &option);

        switch (option) {
            case 1: area2D(); break;
            case 2: area3D(); break;
            case 3: volume3D(); break;
            case 4: printf("Goodbye!\n"); break;
            default: printf("Invalid option. Try again.\n"); pause();
        }
    } while (option != 0);

    return 0;
}
