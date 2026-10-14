#include <stdio.h>

// Binary Search implementation
int binary_search(const int arr[], int size, int target) {
    int low = 0, high = size - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == target) {
            return mid;      // Target found, return index
        }
        if (arr[mid] < target) {
            low = mid + 1;   // Discard left half, search right
        } else {
            high = mid - 1;  // Discard right half, search left
        }
    }
    
    return -1; // Target not found in the array
}

int main(void) {
    // Array must be pre-sorted for binary search
    int data[] = {11, 12, 22, 25, 34, 64, 90};
    int size = sizeof(data) / sizeof(data[0]);
    int target = 22;

    int index = binary_search(data, size, target);

    if (index != -1) {
        printf("Element %d found at sorted index %d.\n", target, index);
    } else {
        printf("Element %d not found.\n", target);
    }

    return 0;
}