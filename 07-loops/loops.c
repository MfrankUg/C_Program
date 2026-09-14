// Practice on Loops
// Simple counter using while loop and count down using for loop
#include <stdio.h>

int main(){
 int count = 0;
 while (count <=9){
     count ++;
    printf("Number: %d\n",count);
    // count ++;
 }

 for(int i = 5; i > 0 ; i--){
  printf("%d .... ",i);

 }
 printf("bast off \n");


 return 0;
}