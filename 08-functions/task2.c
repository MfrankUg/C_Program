/*
Task 2: Maximum of Three Numbers (multiple parameters)
Write a function that accepts three integer arguments and returns the largest one.

Function Prototype: int find_max(int a, int b, int c);

Logic: Compare a, b, and c using conditional statements (if...else) and return the maximum value.

Task: Prompt the user or hardcode three numbers in main(), call find_max(), 
and output the returned result.

*/

#include <stdio.h>

int find_max(int a, int b, int c){
    if(a>=b && a>=c){
        return a;
    }
    else if(b>=a && b>=c){
        return b;
    }
    else {
        return c;
    }
    
}
 
int main(){
 
 int maxValue = find_max(0,2,36);
 printf("Maximum value is %d\n",maxValue);

}