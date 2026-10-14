/*
6. (10 Marks) What is a recursive function. Write a C program to find the factorial
of a number using recursion
5! = 5x4x3x2x1
*/  

#include <stdio.h>
int factorial(int n);
int main(){
 int value; 
 printf("Enter the value to factor out e.g 3: \n");
 scanf("%d", &value);
 int result = factorial(value);
 printf("The factorial of %d is %d \n",value, result);
}

int factorial(int n){
   // base
   if(n == 0) {
    return 1;
   } 
   // factorial return
   return n * factorial(n-1);
}
