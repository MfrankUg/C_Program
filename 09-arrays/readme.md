# 09. Arrays in C

An **array** is a fixed-size, contiguous collection of elements of the same data type stored sequentially in computer memory. Arrays provide an efficient mechanism for grouping and managing multiple variables under a single identifier rather than declaring separate variables individually.

---

## 1. Core Concepts & Characteristics

* **Homogeneous Data:** Every element inside an array must be of the same data type (e.g., all `int`, all `float`, or all `char`).

* **Contiguous Memory:** Elements are allocated in adjacent, sequential memory addresses in RAM.

* **Zero-Based Indexing:** Array positions start at index `0` and run up to `size - 1`.

* **Static Sizing:** In standard C, the size of a conventional array is determined at compile time and cannot be resized dynamically after allocation.

---

## 2. Memory Layout & Indexing

Because arrays are stored contiguously in memory, accessing an element via its index involves direct address arithmetic.

```text
Array Declaration: int arr[4] = {10, 20, 30, 40};

Element Index:       [0]       [1]       [2]       [3]
Stored Value:         10        20        30        40
Memory Address:   0x7fff00  0x7fff04  0x7fff08  0x7fff0c
```

The memory offset for any given element is calculated as:

```text
Address of arr[i] = Base Address + (i * sizeof(datatype))
```

For example, if an `int` occupies 4 bytes, moving from `arr[0]` to `arr[1]` moves 4 bytes forward in memory.

---

## 3. One-Dimensional Arrays

### Declaration and Initialization Syntax

```c
// Declaration without initialization
// Local arrays contain indeterminate values.
int numbers[5];

// Declaration with explicit initialization
int scores[5] = {85, 90, 78, 92, 88};

// Partial initialization
// Unspecified elements are initialized to 0.
int values[5] = {10, 20};
// Evaluates to: {10, 20, 0, 0, 0}

// Universal zero-initialization
int zeros[5] = {0};
// Evaluates to: {0, 0, 0, 0, 0}

// Implicit sizing
// The compiler determines the size from the initializer list.
int data[] = {1, 2, 3, 4, 5};
// Array size automatically becomes 5
```

### Accessing and Modifying Elements

```c
int arr[3] = {5, 10, 15};

// Reading an element
int x = arr[0];  // x = 5

// Updating an element
arr[1] = 50;     // arr is now {5, 50, 15}
```

---

## 4. Multidimensional Arrays (2D Arrays)

Multidimensional arrays are **arrays of arrays**. A two-dimensional (2D) array represents a grid or matrix consisting of rows and columns.

### Syntax and Memory Representation

```c
// Declaration of a 2D array: 2 rows and 3 columns
int matrix[2][3] = {
    {1, 2, 3},  // Row 0
    {4, 5, 6}   // Row 1
};

// Accessing row 1, column 0
// Evaluates to 4
int val = matrix[1][0];
```

In physical RAM, 2D arrays are stored in **row-major order**, meaning all elements of Row 0 are placed sequentially, followed immediately by all elements of Row 1.

The memory layout is conceptually:

```text
Row 0:  1  2  3
Row 1:  4  5  6

Memory order:
1 → 2 → 3 → 4 → 5 → 6
```

---

## 5. Array Operations Reference

| Operation          | Code Snippet                    | Description                                                                    |
| ------------------ | ------------------------------- | ------------------------------------------------------------------------------ |
| **Access Element** | `int x = arr[i];`               | Reads the value at index `i`.                                                  |
| **Modify Element** | `arr[i] = val;`                 | Writes `val` to index `i`.                                                     |
| **Calculate Size** | `sizeof(arr) / sizeof(arr[0])`  | Calculates the number of elements when `arr` is an actual array in that scope. |
| **Iterate (1D)**   | `for (int i = 0; i < len; i++)` | Sequential traversal using a single loop.                                      |
| **Iterate (2D)**   | `for (r...) { for (c...) }`     | Grid traversal using nested loops.                                             |

---

## 6. Complete Implementation Example

Save the following source code to:

```text
09-arrays/arrays.c
```

```c
#include <stdio.h>

int main(void) {

    // 1. One-Dimensional Array Traversal and Operations

    int grades[5] = {85, 90, 78, 92, 88};

    int total_elements = sizeof(grades) / sizeof(grades[0]);

    int sum = 0;

    printf("=== 1D Array Traversal ===\n");

    for (int i = 0; i < total_elements; i++) {
        printf("Element at index %d = %d\n", i, grades[i]);
        sum += grades[i];
    }

    double average = (double)sum / total_elements;

    printf("Sum: %d | Average: %.2f\n\n", sum, average);


    // 2. Two-Dimensional Array Grid Traversal

    printf("=== 2D Array Traversal (3x3 Matrix) ===\n");

    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int row = 0; row < 3; row++) {

        for (int col = 0; col < 3; col++) {
            printf("%d ", matrix[row][col]);
        }

        printf("\n");
    }

    return 0;
}
```

### Expected Output

```text
=== 1D Array Traversal ===
Element at index 0 = 85
Element at index 1 = 90
Element at index 2 = 78
Element at index 3 = 92
Element at index 4 = 88
Sum: 433 | Average: 86.60

=== 2D Array Traversal (3x3 Matrix) ===
1 2 3
4 5 6
7 8 9
```

---

## 7. Common Pitfalls and Best Practices

### Buffer Overflow / Out-of-Bounds Access

C does not perform automatic bounds checking on array indices.

Accessing an index outside the valid range `0` to `size - 1` results in **undefined behavior**, which can lead to memory corruption or a segmentation fault.

```c
int arr[5];

arr[5] = 100;  // UNSAFE: Valid indices are 0 through 4!
```

The valid indices are:

```text
arr[0]
arr[1]
arr[2]
arr[3]
arr[4]
```

---

### Uninitialized Local Arrays

Arrays declared inside functions without explicit initialization contain **indeterminate values**.

For example:

```c
int numbers[5];
```

Do not read from the elements until you have assigned valid values to them.

A safer approach is:

```c
int numbers[5] = {0};
```

This initializes all elements to zero.

> **Note:** Objects with static storage duration are initialized differently; the warning above specifically concerns ordinary uninitialized local arrays.

---

### Array Decay to Pointers

When an array is passed to a function, the array expression generally **decays into a pointer** to its first element.

For example:

```c
int numbers[5] = {10, 20, 30, 40, 50};
```

When passed to a function:

```c
print_array(numbers);
```

the function receives a pointer to the first element.

Therefore, you normally need to pass the array length separately:

```c
void print_array(int arr[], int size);
```

or:

```c
void print_array(int *arr, int size);
```

Inside such a function, `sizeof(arr)` does **not** give the size of the original array because `arr` is treated as a pointer parameter.

---

## 8. Compilation and Execution

Use GCC to compile the program with strict warning diagnostics.

### Navigate to the Module Folder

```bash
cd 09-arrays
```

### Compile the Source Code

```bash
gcc -Wall -Wextra -g arrays.c -o arrays
```

### Execute the Program

On Linux or macOS:

```bash
./arrays
```

On Windows using MinGW:

```bash
arrays.exe
```

---

## Quick Summary

| Concept         | Key Point                                                                    |
| --------------- | ---------------------------------------------------------------------------- |
| **Array**       | Stores multiple values of the same data type.                                |
| **Indexing**    | Starts at `0`.                                                               |
| **1D Array**    | Uses one index, e.g. `arr[2]`.                                               |
| **2D Array**    | Uses row and column indices, e.g. `matrix[1][2]`.                            |
| **Memory**      | Array elements are stored contiguously.                                      |
| **Size**        | `sizeof(arr) / sizeof(arr[0])` works for an actual array in its scope.       |
| **Traversal**   | Usually performed using `for` loops.                                         |
| **Safety**      | Never access an index outside the valid range.                               |
| **Array Decay** | Arrays passed to functions generally become pointers to their first element. |
