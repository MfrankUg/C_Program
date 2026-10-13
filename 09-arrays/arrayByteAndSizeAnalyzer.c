/*
Practice Exercise: Array Byte & Size Analyzer
Scenario:
You need to write a C program that inspects how an array is stored in memory by calculating its total byte size, the size of a single element,
 and the total element count using the sizeof operator.

Task Requirements:
Declare an Array: Create an array of long integers (or float) containing at least 6 elements with initial values of your choice.

Calculate Byte Metrics:

Compute the total size of the array in bytes using sizeof.

Compute the size of a single element in bytes using sizeof.

Compute the exact number of elements using the formula: sizeof(array) / sizeof(array[0]).

Display Memory Details: Print out the total bytes of the array, the bytes per element, and the calculated total number of elements.

Iterate and Print: Use a for loop bounded by your calculated size variable to print each element of the array.
*/

#include <stdio.h>
int main(){
   float arr[] = {60,50,45,59,66,70};
   float totalSize= sizeof(arr);
   printf("Size of arr[] is :%.1lf \n",totalSize);
   float sizeOfEle= sizeof(arr[0]);
   printf("Size of elements of arr[] is :%.1lf \n", sizeOfEle);
    float numOfElem= sizeof(arr)/sizeof(arr[0]);
   printf("Size of all elements of arr[] is :%.1lf", numOfElem);
}
