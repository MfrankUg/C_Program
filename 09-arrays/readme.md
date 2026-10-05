# Module 09: Arrays (Basic to Advanced)

An **array** is a fixed-size, contiguous block of memory used to store elements of the exact same data type under a single variable name.

---

## 1. Basic Concepts & One-Dimensional Arrays

### Memory Layout & Basics

- **Homogeneous:** Every element must be of the same type (e.g., all `int` or all `float`).
- **Contiguous Memory:** Elements sit adjacent to each other in RAM.
- **Zero-Based Indexing:** Array indices run from `0` to `size - 1`.

### Declaration and Initialization

```c
// Declaration without initialization (contains garbage memory values)
int numbers[5];

// Direct initialization
int scores[5] = {85, 90, 78, 92, 88};

// Partial initialization (remaining elements default to 0)
int values[5] = {10, 20}; // {10, 20, 0, 0, 0}

// Inferred size initialization
int data[] = {1, 2, 3, 4}; // Compiler creates size 4
````

### Accessing, Modifying, and Traversing

```c
// Reading an element
int first_score = scores[0]; // 85

// Updating an element
scores[2] = 95; // Changes 78 to 95

// Calculating array element length safely
int length = sizeof(scores) / sizeof(scores[0]);

// Sequential Traversal
for (int i = 0; i < length; i++) {
    printf("Index %d: %d\n", i, scores[i]);
}
```

---

## 2. Intermediate Concepts: Multidimensional Arrays

Multidimensional arrays (arrays of arrays) represent grids, matrices, or multi-axis data tables.

### 2D Arrays (Matrices)

In RAM, 2D arrays are organized in **Row-Major Order**. Row 0 is placed sequentially in memory, followed immediately by Row 1.

```c
// A 2x3 matrix (2 rows, 3 columns)
int matrix[2][3] = {
    {1, 2, 3}, // Row 0
    {4, 5, 6}  // Row 1
};

// Accessing Row 1, Column 0 -> 4
int val = matrix[1][0];

// Traversal via Nested Loops
for (int r = 0; r < 2; r++) {
    for (int c = 0; c < 3; c++) {
        printf("%d ", matrix[r][c]);
    }
    printf("\n");
}
```

---

## 3. Advanced Concepts: Searching & Sorting Algorithms

### Searching Algorithms

#### Linear Search

Linear search scans elements sequentially from start to end.

* **Time Complexity:** `O(n)`

```c
int linear_search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Target found, return index
        }
    }

    return -1; // Target not found
}
```

#### Binary Search

Binary search efficiently locates an item in a **pre-sorted array** by repeatedly dividing the search interval in half.

* **Time Complexity:** `O(log n)`

```c
int binary_search(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid; // Found
        }

        if (arr[mid] < target) {
            low = mid + 1; // Search right half
        } else {
            high = mid - 1; // Search left half
        }
    }

    return -1; // Target not found
}
```

---

### Sorting Algorithms

#### Bubble Sort

Bubble sort compares adjacent elements and swaps them if they are in the wrong order until the array is sorted.

* **Time Complexity:** `O(n²)`

```c
void bubble_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
```

#### Selection Sort

Selection sort repeatedly finds the minimum element from the unsorted region and places it at the beginning.

* **Time Complexity:** `O(n²)`

```c
void selection_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min_idx = i;

        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // Swap lowest element found with first unsorted element
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}
```

---

## 4. Low-Level Memory Mechanics & Pitfalls

### Address Arithmetic

When an array element `arr[i]` is evaluated, the computer calculates its address using a standard byte-offset formula:

$$
\text{Address of } arr[i] =
\text{Base Address} +
(i \times \text{sizeof}(\text{datatype}))
$$

For example, if an `int` occupies 4 bytes:

```text
arr[0] → Base Address + (0 × 4)
arr[1] → Base Address + (1 × 4)
arr[2] → Base Address + (2 × 4)
```

### Array Decay to Pointers

When an array name is passed into a function, it **decays into a pointer** to its first element.

Therefore, `sizeof(arr)` inside a receiving function measures the **pointer size** (commonly 4 or 8 bytes) rather than the full array size.

Always pass the array size as a separate parameter:

```c
void print_array(int arr[], int size) {
    // Use size to know how many elements are in the array
}
```

### Out-of-Bounds Access (Buffer Overflow)

C does **not** perform bounds checking on array indices.

For an array:

```c
int numbers[5];
```

Valid indices are:

```text
0, 1, 2, 3, 4
```

This is invalid:

```c
numbers[5];
```

Accessing `arr[size]` reads or writes beyond the reserved memory block and can result in:

* Garbage or unexpected data
* Memory corruption
* Segmentation faults
* Undefined behavior

---

## Complete Implementation

### `09-arrays/arrays.c`

Save the following code in `09-arrays/arrays.c` to test array traversal, searching, and sorting:

```c
#include <stdio.h>

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

void bubble_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binary_search(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int main(void) {
    int data[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(data) / sizeof(data[0]);

    printf("Original array: ");
    print_array(data, size);

    // Sorting
    bubble_sort(data, size);

    printf("Sorted array:   ");
    print_array(data, size);

    // Searching
    int target = 22;
    int index = binary_search(data, size, target);

    if (index != -1) {
        printf(
            "Element %d found at sorted index %d\n",
            target,
            index
        );
    } else {
        printf("Element %d not found\n", target);
    }

    return 0;
}
```

---

## Terminal Workflow

Run the following commands to compile and execute your code:

```bash
cd 09-arrays
gcc -Wall -Wextra arrays.c -o arrays
./arrays
```

### Expected Output

```text
Original array: 64 34 25 12 22 11 90
Sorted array:   11 12 22 25 34 64 90
Element 22 found at sorted index 2
```

---

## Key Takeaways

* Arrays store multiple values of the **same data type**.
* Array indexing starts at **0**.
* Array elements are stored in **contiguous memory**.
* `sizeof(array) / sizeof(array[0])` can determine the number of elements when the array is in the same scope.
* A 2D array is essentially an **array of arrays**.
* **Linear Search:** `O(n)`
* **Binary Search:** `O(log n)` on a sorted array.
* **Bubble Sort:** `O(n²)`
* **Selection Sort:** `O(n²)`
* Arrays passed to functions **decay into pointers**.
* C does not automatically prevent **out-of-bounds access**.

