/*
Task 3: Number Square & Cube (void functions & scope)
Write a function that takes an integer, calculates both its square and cube, 
and prints the result inside the function.

Function Prototype: void print_powers(int num);

Return Type: void (since it handles printing internally and returns no value).

Task: Call print_powers(4) from main(). It should output:

Output
Number: 4 | Square: 16 | Cube: 64

*/

#include <stdio.h>

void print_powers(int num);

int main(){
print_powers(3);

}

void print_powers(int num){
  int square_value = num * num;
  int cube_value = num * num * num;

  printf("Number: %d | square: %d | cube: %d\n", num, square_value,cube_value);

}