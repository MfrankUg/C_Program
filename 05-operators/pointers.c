// A pointer is a variable that stores a memory address instead of a normal value.
#include <stdio.h>

int main() {
    int age = 25;
    int *ptr = &age;          // ptr points to age

    printf("Value of age      : %d\n", age);      // 25
    printf("Address of age    : %p\n", &age);     // e.g. 0x7ffeeb...
    printf("Value of ptr      : %p\n", ptr);      // same address
    printf("Value via pointer : %d\n", *ptr);     // 25

    *ptr = 30;                // change the value through the pointer
    printf("New value of age  : %d\n", age);      // 30

    return 0;
}