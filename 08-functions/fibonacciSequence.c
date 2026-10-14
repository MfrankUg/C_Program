/*
The Fibonacci sequence is a series of numbers where each number is the sum of the two preceding ones.
Task 5:
 Recursive Fibonacci Sequence 
 Write a recursive function fibonacci(int n) that returns the n-th Fibonacci number.
 Sequence Definition: 0, 1, 1, 2, 3, 5, 8, 13, 21,..... 
 Fib(0) = 0
 Fib(1) = 1
 Fib(n) = Fib(n - 1) + Fib(n - 2) for n >= 2
 Function Prototype:
 int fibonacci(int n);
 Expected Behavior: Calling fibonacci(7) should return 13.
*/
#include <stdio.h>

// 1. Function Prototype
int fibonacci(int n);

int main(void) {
    // Calling fibonacci(7) to test the implementation
    int result = fibonacci(7);
    
    printf("Fibonacci(7) = %d\n", result); // Expected output: 13
    
    return 0;
}

// 2. Function Definition
int fibonacci(int n) {
    // Base Case 1: Fib(0) = 0
    if (n == 0) {
        return 0;
    }
    
    // Base Case 2: Fib(1) = 1
    if (n == 1) {
        return 1;
    }
    
    // Recursive Step: Fib(n) = Fib(n - 1) + Fib(n - 2) for n >= 2
    return fibonacci(n - 1) + fibonacci(n - 2);
}