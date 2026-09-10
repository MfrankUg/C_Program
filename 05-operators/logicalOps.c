// true - 1 and false - 0

#include <stdio.h> 
#include <stdbool.h>
int main(){
    int age = 20; 
    printf("%d\n", 20 > 18); // 1 meaning true
    printf("%d\n", 1>20); // 0 meaning false
    bool ageNow = true; 
    printf("%s\n", ageNow ? "true": "false"); // tenary operator

/*
    bool age = true;
    printf("%s\n", age ? "true" : "false");   // prints: true

    age = false;
    printf("%s\n", age ? "true" : "false");   // prints: false
*/

}