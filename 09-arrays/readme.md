# 09. Arrays in C

An **array** is a fixed-size, contiguous collection of elements of the same data type stored sequentially in computer memory. Arrays provide an efficient mechanism for grouping and managing multiple variables under a single identifier rather than declaring separate variables individually.

---

## 1. Core Concepts & Characteristics

* **Homogeneous Data:** Every element inside an array must be of identical data type (e.g., all `int`, all `float`, or all `char`).
* **Contiguous Memory:** Elements are allocated in adjacent, sequential memory addresses in RAM.
* **Zero-Based Indexing:** Array positions start at index `0` and run up to `size - 1`.
* **Static Sizing:** In standard C, the size of a conventional array is determined at compile time and cannot be resized dynamically after allocation.

---

## 2. Memory Layout & Indexing

Because arrays are stored contiguously in memory, accessing an element via its index involves direct address arithmetic performed by the compiler.


```

Array Declaration: int arr[4] = {10, 20, 30, 40};

Element Index:      [0]        [1]        [2]        [3]
Stored Value:        10         20         30         40
Memory Address:   0x7fff00   0x7fff04   0x7fff08   0x7fff0c

```

The memory offset for any given element is calculated as:
`Address of arr[i] = Base Address + (i * sizeof(datatype))`

---

## 3. One-Dimensional Arrays

### Declaration and Initialization Syntax

```c
// Declaration without initialization (contains garbage values)
int numbers[5];

// Declaration with explicit initialization
int scores[5] = {85, 90, 78, 92, 88};

// Partial initialization (unspecified elements default to 0)
int values[5] = {10, 20}; // Evaluates to {10, 20, 0, 0, 0}

// Universal zero-initialization
int zeros[5] = {0}; // Evaluates to {0, 0, 0, 0, 0}

// Implicit sizing (compiler infers size based on initializer list length)
int data[] = {1, 2, 3, 4, 5}; // Array size automatically becomes 5

```

### Accessing and Modifying Elements

```c
int arr[3] = {5, 10, 15};

// Reading elements
int x = arr[0]; // x = 5

// Updating elements
arr[1] = 50;    // arr is now {5, 50, 15}

```

---

## 4. Multidimensional Arrays (2D Arrays)

Multidimensional arrays are arrays of arrays. A two-dimensional (2D) array represents a grid or matrix consisting of rows and columns.

### Syntax and Memory Representation

```c
// Declaration of a 2D array: 2 rows and 3 columns
int matrix[2][3] = {
    {1, 2, 3}, // Row 0
    {4, 5, 6}  // Row 1
};

// Accessing row 1, column 0 -> evaluates to 4
int val = matrix[1][0];

```

In physical RAM, 2D arrays are stored in **Row-Major Order**, meaning all elements of Row 0 are placed sequentially, followed immediately by all elements of Row 1.

---

## 5. Array Operations Reference

| Operation | Code Snippet | Description |
| --- | --- | --- |
| **Access Element** | `int x = arr[i];` | Reads value at index `i`. |
| **Modify Element** | `arr[i] = val;` | Writes `val` to index `i`. |
| **Calculate Size** | `sizeof(arr) / sizeof(arr[0])` | Calculates total element count. |
| **Iterate (1D)** | `for (int i = 0; i < len; i++)` | Sequential traversal via single loop. |
| **Iterate (2D)** | `for (r...) { for (c...) }` | Grid traversal via nested loops. |

---

## 6. Complete Implementation Example

Save the following source code to `09-arrays/arrays.c`:

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

---

## 7. Common Pitfalls and Best Practices

### Buffer Overflow / Out-of-Bounds Access

C does not perform automatic bounds checking on array indices. Accessing indices outside `0` to `size - 1` results in undefined behavior, potential memory corruption, or segmentation faults.

```c
int arr[5];
arr[5] = 100; // UNSAFE: Valid indices are 0 through 4!

```

### Uninitialized Local Arrays

Arrays declared inside functions without explicit initialization contain arbitrary residual memory data (garbage values). Always initialize arrays before reading from them.

### Array Decay to Pointers

When an array name is passed to a function, it automatically degrades (decays) into a pointer pointing to its first element (`&arr[0]`). Consequently, `sizeof(arr)` within a parameter function returns pointer size, not full array byte size. Array lengths must be explicitly passed as dedicated parameters.

---

## 8. Compilation and Execution

Use GCC to compile with strict warning diagnostics:

```bash
# Navigate to module folder
cd 09-arrays

# Compile source code
gcc -Wall -Wextra -g arrays.c -o arrays

# Execute executable
./arrays

```

```

```