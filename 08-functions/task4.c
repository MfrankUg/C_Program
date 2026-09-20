/*
Challenge: Sum of Digits (Recursive)
Write a recursive function that takes a positive integer n and returns the sum of its individual digits. // 1264
*/
#include <stdio.h>
int sum_of_integers(int num){
    if(num < 10){
        return num;
      }
    return (num % 10) + sum_of_integers(num/10);
}

int main(){
   int num = 1246; 
   sum_of_integers(num);
   printf("The sum of %d = %d", num);
}