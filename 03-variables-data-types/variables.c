// handling variables
 #include <stdio.h>

 int main(){
    // int has format specifiers as %d or %i
    int a; // variable initailization
    a = 12; // variable declaration 
    int age = 25; // variable initialization and declaration

    printf("a = %d and age = %d \n", a , age);

    // other datatypes 
    double roomBlock = 2.34; // this is known as a long float with a format specifier %lf
    char A = 'a';  // format specifier for character is %c
    float num1 = 3.14232434353452;
    printf("the classroom block is %.2lf at level %c. \n", roomBlock , A );
    printf("the num1 value is %f\n", num1);
   
    // Implicit Type Conversion (Coercion)

    int value1 = 13;
    double value2 = 12.0;
    double result = value1 + value2;
    printf("the sum of %d + %.4lf is %.4lf", value1 , value2 , result);
 }
 