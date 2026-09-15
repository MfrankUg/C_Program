#include <stdio.h>

// 1. Function Declaration (Prototype)
int add_numbers(int a, int b);

int main(void) {
    // 2. Function Call
    int sum = add_numbers(5, 7);
    printf("Sum: %d\n", sum);
    return 0;
}

// 3. Function Definition
int add_numbers(int a, int b) {
    return a + b; // Returns an integer back to main
}