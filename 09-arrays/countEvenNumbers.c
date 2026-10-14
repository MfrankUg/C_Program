/*
Task 4: Count Even Numbers in an Array
Beginner · C Arrays
Problem

Write a simple C program that counts how many even numbers are present in an integer array.

Requirements

1. Declare an integer array of size 5 with these values:

{12, 7, 8, 15, 20}

2. Declare an integer variable count initialized to 0.

3. Use a for loop to iterate through the array from index 0 to 4.

4. Use an if statement to check whether each number is even.

5. If a number is even, increase count by 1.

Print the total number of even elements.
*/

#include<stdio.h>
int main(){
int numbers[5] = {12, 7, 8, 15, 20};
int count = 0; 

for(int i = 0; i < 5; i++){
    if(numbers[i] % 2 == 0){
     numbers[i] = count++ ;
    }
}
printf("%d",count);

}
