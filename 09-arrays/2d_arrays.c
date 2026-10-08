#include <stdio.h>
int main(){
  int matrix[2][3] = {
       {45, 80, 67}, 
       {55, 70, 60}
  };

  printf("%d\n", matrix[1][2]); // 60
 return 0;
}