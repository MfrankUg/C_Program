
/*
Task 3: Table of Factorials (Nested Concepts)
Goal: Use a for loop to generate and print a table showing the factorials for all numbers from $1$ up to $10$.
Task:Set up an outer for loop that iterates through numbers i = 1 to 10.
Inside the loop, compute the factorial of i.
Print each row formatted as:

1! = 1
2! = 2
3! = 6
...
10! = 3628800
*/
#include <stdio.h>

int main() {

    for (int i = 1; i <= 10; i++) {

        long factorial = 1;

        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }

        printf("%d! = %ld\n", i, factorial);
    }

    return 0;
}