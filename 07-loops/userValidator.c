// Use a do...while loop to continuously ask the user to enter a positive integer until they give a valid input.

#include <stdio.h>
int main(void){
  int num;
  do{
  printf("Enter a positive value\n");
  scanf("%d",&num);
  }while(num <= 0);
  printf("Well done: %d is positive",num);
}