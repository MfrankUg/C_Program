// Write a program using a for loop that prints the multiplication table for the number 5 (from 0 to 10).

#include <stdio.h>
int main(){
    int num = 5;
    printf("======================================\n");
    printf("      MULTIPLICATION TABLE OF 5       \n");
    printf("======================================\n");
    for(int i = 0; i <= 10; i++){
        printf("%d x %d = %d \n", num, i , num*i);

    }
}