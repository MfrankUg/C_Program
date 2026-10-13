# 09. Sorting Mechanisms in C

Sorting is the process of arranging the elements of an array in a specific order—typically **ascending** (smallest to largest) or **descending** (largest to smallest). Because arrays are stored contiguously in memory, sorting algorithms manipulate indexed elements by comparing and swapping their values.

---

## 1. Bubble Sort

**Bubble Sort** is a straightforward comparison-based algorithm. It repeatedly steps through the array, compares adjacent elements, and swaps them if they are in the wrong order[cite: 1]. With each full pass, the largest unsorted element "bubbles up" to its correct position at the end of the array.

### Implementation
```c
void bubble_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap adjacent elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

```

### Characteristics

* **Time Complexity:** O(n^2) in the worst and average cases.


* **Space Complexity:** O(1) (in-place sorting).
* **Stability:** Stable sorting algorithm (preserves the relative order of duplicate elements).

---

## 2. Selection Sort

**Selection Sort** divides the array into two regions: sorted (left) and unsorted (right). It repeatedly scans the unsorted region to find the minimum element, swaps it with the leftmost unsorted element, and expands the sorted region by one index.

### Implementation

```c
void selection_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Swap the found minimum element with the first unsorted element
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

```

### Characteristics

* **Time Complexity:** O(n^2) for all cases because it always scans the remaining elements.


* **Space Complexity:** O(1) (in-place sorting).
* **Stability:** Generally unstable (swapping non-adjacent elements can alter the relative order of identical keys).

---

## 3. Insertion Sort

**Insertion Sort** builds the final sorted array one item at a time. It takes an element from the unsorted portion, compares it backwards against the elements in the sorted portion, and shifts elements to the right until the correct insertion spot is found.

### Implementation

```c
void insertion_sort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of the sorted region that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

```

### Characteristics

* **Time Complexity:** O(n) for best case (already sorted array); O(n^2) for worst and average cases.
* **Space Complexity:** O(1) (in-place sorting).
* **Stability:** Stable sorting algorithm.


