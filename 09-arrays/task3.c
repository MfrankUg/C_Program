/*
Task 2: Calculate the Sum and Average of Array Elements
Write a C program that calculates both the sum and the average of all values in an array.

Requirements
Declare an integer array of size 5 with test values (e.g., {10, 20, 30, 40, 50}).

Declare an integer variable sum initialized to 0.

Use a for loop running from index 0 to 4 (i < 5) to iterate through the array and accumulate each element into sum.

Compute the average as a floating-point number (double or float) using explicit type casting:

C
double average = (double)sum / 5;
Print both the total sum and average formatted to 2 decimal places (%.2f).
*/

#include<stdio.h>
int main(){
 int arr[5] = {10, 20, 30, 40, 50};
 int sum = 0;
 
 for (int i = 0 ; i < 5; i++){
    
   sum += arr[i];
 }

 printf("Sum: %d \n", sum); 
 double average = (double)sum/5; 
 printf("Average: %.2f\n",average);
}