/*
Task: Student Test Score Matrix
Scenario: You need to store test scores for 3 students across 4 tests (a 3 x 4 grid).
Requirements:
1. Use #define to create two preprocessor constants at the top of your program:
      STUDENTS set to 3 
      TESTS set to 4
2. Declare a 2D array int scores[STUDENTS][TESTS]; using your defined constants.
Write a nested for loop that uses scanf() to take scores from the user to fill the matrix.
Write another nested for loop that prints the matrix in neat row/column format.

*/
#include <stdio.h>
#define STUDENT 3
#define TEST 4

int main(){
   int scores[STUDENT][TEST];
   for (int row = 0; row < STUDENT; row ++){
    for(int col = 0; col < TEST; col++){
        printf("Enter element at row %d  and column %d : \n", row , col);
        scanf("%d", &scores[row][col]); 
    }
   } 
   printf("\n ======= Matrix output ======\n");
   for(int row = 0 ; row < STUDENT; row ++){
   for(int col = 0; col < TEST; col++){
   printf(" %d ", scores[row][col]);
    }
    printf("\n");
  }
  return 0; 
}