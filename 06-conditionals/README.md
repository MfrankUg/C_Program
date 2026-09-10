# 06. Conditional Statements

Welcome to Module 06 of the **C Programming Start Series**. In this section, we explore **Conditional Statements** in C, which are decision-making structures that allow programs to execute different code paths based on conditions.

---

## Topics Covered

* **`if` Statement:** Basic decision-making based on conditions.
* **`if...else` Statement:** Provides an alternative code block when a condition evaluates to false.
* **`else if` Ladder:** Evaluates multiple conditions sequentially from top to bottom.
* **Nested `if` Statements:** Places one conditional statement inside another.
* **`switch` Statement:** Provides multi-way branch selection based on integer or character values.
* **Fall-through and `break`:** Controls execution flow within `switch` cases.
* **Ternary Operator (`?:`):** Provides a compact syntax for conditional expressions.

---

## Core Concepts and Syntax

### 1. `if`, `if...else`, and `else if`

In C, any non-zero value is considered **true**, while zero (`0`) is considered **false**.

```c
int score = 85;

if (score >= 90) {
    printf("Grade: A\n");
} else if (score >= 80) {
    printf("Grade: B\n");
} else {
    printf("Grade: C or lower\n");
}
```

---

### 2. Switch Statement

The `switch` statement evaluates an expression against multiple `case` labels. The expression must be of an integer-compatible type, such as `int` or `char`.

```c
char grade = 'B';

switch (grade) {
    case 'A':
        printf("Excellent!\n");
        break;

    case 'B':
        printf("Well done!\n");
        break;

    case 'C':
        printf("Good effort!\n");
        break;

    default:
        printf("Keep trying!\n");
        break;
}
```

> **Note:** Use `break;` to prevent execution from continuing into the next case. Omitting `break;` intentionally can be used to create fall-through behavior.

---

### 3. Ternary (Conditional) Operator (`?:`)

The ternary operator is a concise alternative to an `if...else` statement. It is commonly used for simple conditional assignments or expressions.

The general syntax is:

```text
condition ? expression_if_true : expression_if_false
```

Example:

```c
int age = 20;

const char *status = (age >= 18) ? "Adult" : "Minor";
```

In this example:

* If `age >= 18` is true, `status` receives `"Adult"`.
* Otherwise, `status` receives `"Minor"`.

---

## Source Code Example

The following example demonstrates an `if...else if...else` ladder, the ternary operator, and a `switch` statement.

### `conditions.c`

```c
#include <stdio.h>

int main(void) {
    int number;

    printf("Enter an integer: ");

    if (scanf("%d", &number) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    // 1. If-Else Ladder (Positive / Negative / Zero)
    if (number > 0) {
        printf("%d is positive.\n", number);
    } else if (number < 0) {
        printf("%d is negative.\n", number);
    } else {
        printf("The number is zero.\n");
    }

    // 2. Ternary Operator (Even / Odd)
    printf(
        "The number is %s.\n",
        (number % 2 == 0) ? "Even" : "Odd"
    );

    // 3. Switch Statement Example
    int choice = number % 3;

    switch (choice) {
        case 0:
            printf("Number is divisible by 3.\n");
            break;

        case 1:
        case -1:
            printf("Remainder when divided by 3 is 1 (or -1).\n");
            break;

        default:
            printf("Remainder when divided by 3 is 2 (or -2).\n");
            break;
    }

    return 0;
}
```

---

## How to Compile and Run

Navigate to the module directory and compile the program using GCC:

```bash
cd 06-conditionals
gcc -Wall -Wextra -g conditions.c -o conditions
```

### Linux and macOS

Run the compiled program with:

```bash
./conditions
```

### Windows PowerShell

Run the compiled program with:

```powershell
.\conditions.exe
```

---

## Example Output

For an input such as `10`:

```text
Enter an integer: 10
10 is positive.
The number is Even.
Number is not divisible by 3.
```

---

## Git Workflow

To commit and push your work for this module to GitHub:

```bash
git add 06-conditionals/
git commit -m "Add 06-conditionals notes and code examples"
git push origin main
```

---

## Module Structure

The module can be organized as follows:

```text
06-conditionals/
├── README.md
└── conditions.c
```

---

## Key Takeaways

After completing this module, you should understand:

1. How to use `if` statements for basic decision-making.
2. How to use `if...else` to handle two possible outcomes.
3. How to use `else if` to evaluate multiple conditions.
4. How to use nested conditional statements.
5. How `switch` statements work.
6. Why `break` is used in `switch` statements.
7. How fall-through behavior works.
8. How to use the ternary operator for simple conditional expressions.
9. How to compile and run a C program using GCC.
10. How to commit and push your work using Git.
