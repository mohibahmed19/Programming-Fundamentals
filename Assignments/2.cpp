#include <stdio.h>

int main() {
    float a, b, c;

    // Input: three sides of the triangle
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check if the sides form a valid triangle
    if (a + b > c && a + c > b && b + c > a) {
        printf("This is a valid triangle.\n");

        // Check for Equilateral
        if (a == b == c) {
            printf("The triangle is Equilateral.\n");
        }
        // Check for Isosceles
        else if (a == b || a == c || b == c) {
            printf("The triangle is Isosceles.\n");
        }
        // Else, it must be Scalene
        else {
            printf("The triangle is Scalene.\n");
        }
    } else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}

