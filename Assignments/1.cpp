#include <stdio.h>

int main() {
    int year;

    // Ask user for input
    printf("Enter a year: ");
    scanf("%d", &year);

    // Step-by-step checking
    if (year % 400 == 0) {
        // Case 1: Divisible by 400 ? leap year
        printf("%d is a leap year.\n", year);
    }
    else if (year % 100 == 0) {
        // Case 2: Divisible by 100 but not by 400 ? not a leap year
        printf("%d is not a leap year.\n", year);
    }
    else if (year % 4 == 0) {
        // Case 3: Divisible by 4 but not by 100 ? leap year
        printf("%d is a leap year.\n", year);
    }
    else {
        // Case 4: All other years ? not a leap year
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}

