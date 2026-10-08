#include <stdio.h>
int main(){
  int matrix[2][3] = {
       {45, 80, 67}, 
       {55, 70, 60}
  };

  //printf("%d\n", matrix[1][2]); // 60

  for (int student = 0 ; student < 2; student++){
   for(int test = 0 ; test < 3; test++){
     printf(" %d", matrix[student][test]);
   }
   printf("\n");
  }
 return 0;
}