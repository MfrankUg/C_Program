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