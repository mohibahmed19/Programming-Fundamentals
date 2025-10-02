#include <stdio.h>

int main() {
    char ch;

    // Input: a single character
    printf("Enter a character: ");
    scanf(" %c", &ch);  // Leading space to ignore any previous newline

    // Check the character type using ASCII values
    if (ch >= 'A' && ch <= 'Z') {
        printf("The character '%c' is an Uppercase Letter.\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("The character '%c' is a Lowercase Letter.\n", ch);
    }
    else if (ch >= '0' && ch <= '9') {
        printf("The character '%c' is a Digit.\n", ch);
    }
    else {
        printf("The character '%c' is a Special Character.\n", ch);
    }

    return 0;
}


