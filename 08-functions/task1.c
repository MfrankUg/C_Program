/*
Task 1: Temperature Converter (pass-by-value & return types)
Write a function that converts a temperature from Fahrenheit to Celsius.
Function Prototype:
 double fahrenheit_to_celsius(double fahrenheit);
Formula: $C = (F - 32)* (5/9)
Task: Call this function inside main() with an example temperature (e.g., 98.6°F) 
and print the result formatted to 2 decimal places.
*/
#include <stdio.h>
double fahrenheit_to_celsius(double fahrenheit){
    return ((fahrenheit - 32)*(5.0/9.0));
}

int main(){
    double result = fahrenheit_to_celsius(98.6);
    printf("%.1lf°c", fahrenheit_to_celsius, result);
 return 0;
}