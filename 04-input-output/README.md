
# 04. Input & Output

Input and output (I/O) operations allow C programs to interact with users by displaying formatted information to the screen and reading input from the keyboard[cite: 3]. In standard C, these functions are provided by the Standard Input Output library (`<stdio.h>`)[cite: 3].

---

## Key Topics Covered

1. **Formatted Output with `printf()`**
2. **Format Specifiers & Field Width**
3. **Escape Sequences**
4. **User Input with `scanf()`**
5. **The Address-of Operator (`&`)**
6. **Common Input Buffer Pitfalls**

---

## 1. Formatted Output: `printf()`

The `printf()` function prints formatted text and variable values to the standard output (screen)[cite: 3].

### Syntax
```c
printf("Format string", variable1, variable2, ...);

```

### Common Format Specifiers

Format specifiers act as placeholders inside the format string, telling C how to display the data type:

| Specifier | Data Type | Description |
| --- | --- | --- |
| `%d` or `%i` | `int` | Signed decimal integer

 |
| `%f` | `float` | Single-precision floating-point number

 |
| `%lf` | `double` | Double-precision floating-point number

 |
| `%c` | `char` | Single character

 |
| `%s` | `char[]` | String / sequence of characters

 |

### Formatting Output Precision & Width

You can control the visual width and decimal precision of your output:

* **Decimal Precision:** `%.2f` limits floating-point numbers to 2 decimal places.


* **Field Width:** `%5d` pads the output with leading spaces so it takes up at least 5 characters width.
* **Left Alignment:** `%-5d` pads spaces to the right instead of the left.

---

## 2. Escape Sequences

Escape sequences begin with a backslash (`\`) and allow you to format layout or insert non-printable characters:

| Escape Sequence | Description |
| --- | --- |
| `\n` | Newline (moves cursor to the next line)

 |
| `\t` | Horizontal Tab (adds spacing alignment)

 |
| `\\` | Prints a literal backslash `\`<br> |
| `\"` | Prints a literal double quote `"`<br> |

---

## 3. User Input: `scanf()`

The `scanf()` function reads formatted input entered by the user via the keyboard.

### Syntax

```c
scanf("format_specifier", &variable_name);

```

### The Address-of Operator (`&`)

`scanf()` requires the **memory address** of a variable so it knows where to store the user's input. Except for arrays and strings, basic primitive types (`int`, `float`, `char`, `double`) **must** be preceded by the `&` operator.

```c
int age;
scanf("%d", &age); // Correct: Passes the memory address of 'age'

```

---

## 4. Common `scanf()` Pitfalls & Solutions

### Missing the Address-of Operator (`&`)

Forgetting `&` when reading a primitive type will cause your program to crash with a **Segmentation Fault** or memory access error at runtime.

### Leftover Newline in Input Buffer

When a user types a number and presses `Enter`, `scanf()` reads the number but leaves the newline character (`\n`) sitting in the input buffer. If you subsequently read a character (`%c`), it will instantly consume that leftover `\n` instead of waiting for user input.

**Solution:** Put a leading space before `%c` in `scanf()` to automatically skip any leftover whitespace or newline characters:

```c
// Leading space skips leftover \n in the buffer
scanf(" %c", &grade);

```

---

## Source Code Example

The code for this section is located in `input.c`:

```c
#include <stdio.h>

int main(void) {
    int age;
    double height;
    char grade;

    // Reading inputs
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height in meters (e.g., 1.75): ");
    scanf("%lf", &height);

    printf("Enter your target letter grade: ");
    scanf(" %c", &grade); // Note space before %c

    // Displaying formatted results
    printf("\n=== User Summary ===\n");
    printf("Age:\t\t%d years old\n", age);
    printf("Height:\t\t%.2lf meters\n", height);
    printf("Target Grade:\t%c\n", grade);

    return 0;
}

```

---

## How to Compile & Run

Open your terminal, navigate to this folder, and compile using GCC:

```bash
cd 04-input-output
gcc -Wall -Wextra input.c -o input.exe
.\input.exe

```

---

