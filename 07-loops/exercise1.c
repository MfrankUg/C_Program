/*
Task 1: Basic Factorial CalculationGoal:
 Write a C program using a for loop to compute 
 and print the factorial of a single fixed integer, $n = 5$.
 
 Task:Initialize an integer variable n = 5 
 and a long variable factorial = 1 (start at 1 because multiplying by 0 clears the result)
 .Write a for loop starting from 1 up to n.
 In each turn, 
 multiply factorial by the current loop index (1 x 2 X 3....).
 Print the final result (Expected output for $5!$: 120).
*/

// Solution  5! = 5x4x3x2x1 = n(n-1)

#include <stdio.h>

int n = 5;

int main() {

    printf("====================================\n");
    printf("                   5!\n");
    printf("====================================\n");

    long factorial = 1;

    for (int i = 1; i <= n; i++) {

        factorial *= i;

        printf("%d x %d = %ld\n", n, i, factorial);
    }

    return 0;
}