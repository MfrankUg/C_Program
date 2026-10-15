# 10. Strings

In C, strings are not a primitive data type like `int` or `float`. Instead, C handles strings as **arrays of characters** terminated by a special null character (`\0`). Understanding how strings work under the hood is critical for memory management and safe text processing.

---

## 1. What is a String in C?

A string is a sequence of characters stored in contiguous memory locations, ending with a null terminator `\0` (which has an ASCII value of 0). The null terminator tells functions where the string ends.

### Declaration and Initialization
There are two primary ways to declare and initialize strings:

```c
// Method 1: Using a string literal (size is calculated automatically, null terminator is added implicitly)
char greeting[] = "Hello";

// Method 2: Character array (must explicitly include space for the null terminator)
char name[6] = {'J', 'o', 'h', 'n', '\0'};

```

> **Important:** If you declare a character array manually without `\0`, standard string functions will keep reading memory past the array bounds until they accidentally encounter a zero byte, leading to undefined behavior or security vulnerabilities.

---

## 2. String Input and Output

C provides standard library functions in `<stdio.h>` to handle reading and writing text.

### Output: `printf()` and `puts()`

* `printf("%s", str)`: Prints a string up to the null terminator.
* `puts(str)`: Prints a string and automatically appends a newline character (`\n`).

### Input: `scanf()` vs `fgets()`

* **`scanf("%s", str)`**: Reads input until it encounters whitespace (spaces, tabs, or newlines). It is unsafe for long sentences because it doesn't check array bounds (risk of buffer overflow).
* **`fgets(str, sizeof(str), stdin)`**: The **recommended** way to read strings safely. It reads a full line (including spaces) up to the specified size limit or a newline.

```c
#include <stdio.h>

int main(void) {
    char fullName[50];

    printf("Enter your full name: ");
    // Safely read input including spaces
    fgets(fullName, sizeof(fullName), stdin);

    printf("Hello, %s", fullName); // puts() or printf()
    return 0;
}

```

---

## 3. The `<string.h>` Library

C provides a rich set of built-in functions for string manipulation by including the `<string.h>` header.

| Function | Purpose | Example |
| --- | --- | --- |
| `strlen(s)` | Returns the length of string `s` (excluding `\0`). | `int len = strlen("Hello");` (returns 5) |
| `strcpy(dest, src)` | Copies `src` string into `dest`. | `char dest[20]; strcpy(dest, "C Programming");` |
| `strcat(dest, src)` | Appends `src` string to the end of `dest`. | `char text[20] = "Hello "; strcat(text, "World!");` |
| `strcmp(s1, s2)` | Compares two strings lexicographically. Returns 0 if identical. | `if (strcmp(password, "secret") == 0) { ... }` |

---

## 4. Example: Working with String Functions

Here is a practical example demonstrating string length, copying, concatenation, and comparison:

```c
#include <stdio.h>
#include <string.h>

int main(void) {
    char greeting[50] = "Hello";
    char name[] = "Developer";
    
    // 1. Length of string
    printf("Length of greeting: %lu\n", strlen(greeting));

    // 2. Concatenation (Add a space and name)
    strcat(greeting, " ");
    strcat(greeting, name);
    printf("Concatenated: %s\n", greeting);

    // 3. String Comparison
    char password[] = "secret123";
    char input[50];

    printf("Enter password: ");
    scanf("%s", input);

    if (strcmp(password, input) == 0) {
        printf("Access Granted!\n");
    } else {
        printf("Access Denied!\n");
    }

    return 0;
}

```

---

## 5. Common Pitfalls to Avoid

1. **Buffer Overflows:** Always ensure your destination array is large enough to hold the incoming data plus the null terminator when using `strcpy()` or `strcat()`. (Consider using safer alternatives like `strncpy()` and `strncat()` when handling untrusted user input).
2. **Direct Assignment Failure:** You cannot assign values to a character array using the `=` operator after initialization:
```c
char str[10];
// str = "Hello"; // ERROR: Assignment to expression with array type
// Use strcpy(str, "Hello"); instead!
