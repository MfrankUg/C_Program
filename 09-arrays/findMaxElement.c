/*
Task 1: Find the Maximum Element in an Array
Write a simple C program in your 09-arrays/ task1.c file that finds and prints the maximum value in an integer array.

Requirements
Declare an integer array of size 5 with any values (e.g., {12, 45, 7, 89, 23}).

Iterate through the array using a for loop.

Print the highest number found in the array.

*/
#include<stdio.h>
int main(){
 int numbers[5] = {12, 45, 7, 89, 23};
 int max = numbers[0];

 for(int i = 0; i < 5 ; i++ ){
   if (numbers[i] > max) {
   max = numbers[i];
 }
 }
  printf("%d \n", max);
}