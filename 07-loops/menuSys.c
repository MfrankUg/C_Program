// vaild password menu using do while
#include <stdio.h>
int main(){
int secretPin;
do{
    printf("Enter 4 digit pin\n");
    scanf("%d",&secretPin); 
}while (secretPin != 1234);
printf("Access Granted !!");
return 0;
}