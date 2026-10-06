/*
Task 3: Count Even and Odd Numbers in an Array
Now let's build on this logic! Write a C program that counts how many even numbers and how many odd numbers are in an array.

Requirements
Declare an integer array of size 6 with test values (e.g., {12, 7, 9, 24, 18, 5}).

Declare two counter variables: even_count = 0 and odd_count = 0.

*/

#include<stdio.h>
int main(){
int digits[6] = {12, 7, 9, 24, 18, 5};
int even_count = 0 ;
int odd_count = 0;
 for(int i = 0 ; i < 6; i++){
    if( digits[i] %2 == 0){
        digits[i] = even_count++;
    }
    else{
        odd_count ++;
    }
 }
printf("Even numbers are : %d \n",even_count);
printf("Odd numbers are : %d \n",odd_count);
}