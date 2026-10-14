// Practice on factorial(n!)
// Program to print 20 stars * in a right angled facing down. 

#include<stdio.h>
int n =20;
int main(){
  for(int i=n ; i > 0 ; i--){
    for(int z = 0; z<i; z++){
    printf("*");
    }
    printf("\n");
  }
 return 0;
}