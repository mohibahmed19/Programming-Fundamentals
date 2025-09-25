#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    // Input: number of units consumed
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Bill calculation
    if (units <= 100) {
        bill = units * 5;
    } 
    else if (units<=200) {
        bill = (units * 7);
    } 
    else {
        bill = (units * 10);
    }

    // Output: total bill
    printf("Total electricity bill: Rs. %.2f\n", bill);

    return 0;
}

