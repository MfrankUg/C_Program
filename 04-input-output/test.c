#include <stdio.h>

int main(void) {
    int age;
    double height;
    char grade;

    // 1. Reading single and multiple inputs
    printf("Enter your age: ");
    scanf("%d", &age); // Remember the '&' operator!

    printf("Enter your height in meters (e.g., 1.75): ");
    scanf("%lf", &height);

    // Note: Space before %c skips any leftover newline character in the input buffer
    printf("Enter your target letter grade: ");
    scanf(" %c", &grade);

    // 2. Formatted Output using Escape Sequences
    printf("\n=== User Summary ===\n");
    printf("Age:\t\t%d years old\n", age);
    printf("Height:\t\t%.2lf meters\n", height); // Fixed to 2 decimal places
    printf("Target Grade:\t%c\n", grade);

    return 0;
}