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

int main(void) {
    float arr[] = {60.5, 50.0, 45.2, 59.8, 66.1, 70.4};

    // 1. Calculate total size in bytes (use size_t or int)
    size_t totalSize = sizeof(arr);
    printf("Total size of arr[] is: %zu bytes\n", totalSize);

    // 2. Calculate size of a single element in bytes
    size_t sizeOfEle = sizeof(arr[0]);
    printf("Size of a single element is: %zu bytes\n", sizeOfEle);

    // 3. Calculate exact number of elements
    int numOfElem = sizeof(arr) / sizeof(arr[0]);
    printf("Total number of elements is: %d\n\n", numOfElem);

    // 4. Iterate and print each element using the calculated size
    printf("Array elements: ");
    for (int i = 0; i < numOfElem; i++) {
        printf("%.1f ", arr[i]);
    }
    printf("\n");

    return 0;
}