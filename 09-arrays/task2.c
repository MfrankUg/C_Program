/*
Task 1: Find the Minimum Element in an Array
Write a simple C program in your 09-arrays/ task2.c file that finds and prints the maximum value in an integer array.

Requirements
Declare an integer array of size 5 with any values (e.g., {20, 5, 10, 9, 23, 12}).

Iterate through the array using a for loop.

Print the highest number found in the array.

*/

#include <stdio.h>
int main(){
 int arr[6] = {20, 5, 10, 9, 23, 12};
 int min = arr[0];

  for(int i = 0 ; i < 6 ; i++){
    //printf("%d \n", i);
    if(arr[i]< min){
     min = arr[i]; 
    }
  }
printf("%d \n", min);
 return 0; 
}