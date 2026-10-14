/*
Task 6: 
Recursive Power Function (a^b)
Write a recursive function power(int base, int exp) that calculates
base^exp for non-negative exponents (exp >= 0).
Mathematical Concept:
Base Case: 
Any number raised to the power of 0 is 1 (base^0 = 1).
Recursive Step:
base^exp = base x base^(exp - 1).
Function Prototype: 
int power(int base, int exp);
Expected Behavior: Calling power(2, 5) should return 32.
*/

#include <stdio.h>

int power(int base, int exp); // functional prototype 
int main(){
 int result = power(2,5);
 printf("2^5; = %d\n", result);
 return 0;
}

int power(int base, int exp){
    //base case 
    if (exp==0){
        return 1;
    }
    // Recurvise
 return base * power(base, exp - 1); // base^exp = base * base^(exp - 1)
}