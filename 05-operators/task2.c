/*
Task 2: Factorial with User Input Validation
Goal: Compute n! based on user input while preventing
 calculations for negative numbers or zero.
 Task:Prompt the user to enter a number n.
 If n < 0, 
 print an error message stating factorials are not defined for negative numbers.
 If n == 0, directly print 0! = 1.
 If n > 0, run a for loop to calculate n! and print the result.

*/

#include<stdio.h>
int main(){
    printf("=======================\n");
    printf("        FINDING n!\n");
    printf("=======================\n");
   int n; 
   printf("Enter a number to find it's n!.\n");
   scanf("%d",&n);

   if(n < 0){
    printf("Error: Factorial not defined for Negative numbers");
   }
   else if (n==0){
    printf("0! = 1");
   }
   else if(n>0){
    int factorial=1;
    for(int i = 1; i <=n; i++){
      factorial *=i;
      printf("%d X %d = %d\n", n , i , factorial); 

    }
  }
  else {
       printf("Invalid Process.."); 
    }

}