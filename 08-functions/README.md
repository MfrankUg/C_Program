
# 08. Functions in C

Functions are self-contained blocks of code designed to perform specific, reusable tasks[cite: 1, 2]. As programs grow larger, placing all code inside `main()` becomes difficult to read, maintain, and debug. Using functions allows us to break programs into modular, manageable components[cite: 1, 2].

---

## 1. Why Use Functions?

* **Modular Structure:** Divides complex problems into smaller, logical sub-tasks[cite: 1, 2].
* **Code Reusability:** Write once, run multiple times from anywhere in the program[cite: 1, 2].
* **Maintainability:** Isolates bugs to specific functions without breaking the whole application[cite: 1, 2].
* **Readability:** Keeps `main()` clean and easy to follow[cite: 1, 2].

---

## 2. Function Anatomy & Syntax

Every C function consists of four key components[cite: 1, 2]:
1. **Return Type:** The type of value returned to the caller (`int`, `double`, `char`, or `void` if nothing is returned)[cite: 1, 2].
2. **Function Name:** A unique, descriptive identifier following standard C naming rules[cite: 1, 2].
3. **Parameters:** Input values passed to the function enclosed in parentheses[cite: 1, 2].
4. **Function Body:** The block of code wrapped in `{}` executed when called[cite: 1, 2].

### General Syntax
```c
return_type function_name(parameter1_type param1, parameter2_type param2) {
    // Code execution
    return value; // Required unless return_type is void
}

```

---

## 3. Function Workflow: Prototype vs. Definition vs. Call

Because the C compiler reads files sequentially from top to bottom, it must know about a function before it can be used.

### A. Function Declaration (Prototype)

Placed **above** `main()`, telling the compiler the function's return type, name, and parameter list.

```c
int multiply(int a, int b);

```

### B. Function Call

Invokes the function from within `main()` or another function.

```c
int result = multiply(4, 5); // Returns 20

```

### C. Function Definition

Contains the actual implementation of the function, usually placed **below** `main()`.

```c
int multiply(int a, int b) {
    return a * b;
}

```

---

## 4. Parameter Passing Mechanisms

| Mechanism | Description | Modifies Original Variable? |
| --- | --- | --- |
| **Pass by Value** | Copies the argument's value into a new memory location for the function parameter.|  No |
| **Pass by Reference** | Passes memory addresses using **pointers**, giving direct access to the original variable.|  Yes |

### Code Comparison

```c
#include <stdio.h>

// Pass by Value (Original remains unchanged)
void modify_value(int num) {
    num = 100;
}

// Pass by Reference (Original is modified via pointers)
void modify_reference(int *num) {
    *num = 100;
}

int main(void) {
    int x = 10;
    
    modify_value(x);
    printf("After Pass by Value: %d\n", x);     // Outputs 10

    modify_reference(&x);
    printf("After Pass by Reference: %d\n", x); // Outputs 100

    return 0;
}

```

---

## 5. Scope Rules: Local vs. Global Variables

* **Local Variables:** Declared inside a function block `{}`. Accessible **only** within that function and destroyed when execution finishes.


* **Global Variables:** Declared outside all functions. Accessible by **any** function throughout the entire file, but can create hard-to-track side effects.



```c
#include <stdio.h>

int global_var = 50; // Global Scope

void test_scope(void) {
    int local_var = 20; // Local Scope
    printf("Local: %d | Global: %d\n", local_var, global_var);
}

int main(void) {
    test_scope();
    // printf("%d", local_var); // COMPILER ERROR: local_var does not exist here!
    return 0;
}

```

---

## 6. Recursion

**Recursion** occurs when a function calls itself to solve a smaller sub-problem. Every recursive function **must** have a base case to prevent an infinite stack overflow.

### Example: Computing $n!$ (Factorial)

$$\text{Factorial}(n) = n \times \text{Factorial}(n - 1) \quad \text{where } \text{Factorial}(1) = 1$$

```c
#include <stdio.h>

int factorial(int n) {
    // Base Case
    if (n <= 1) {
        return 1;
    }
    // Recursive Step
    return n * factorial(n - 1);
}

int main(void) {
    printf("5! = %d\n", factorial(5)); // Output: 120
    return 0;
}

```

---

##  Sample Code Output (`08-functions/functions.c`)

```c
#include <stdio.h>

// Function Declarations
double calc_area(double length, double width);
void print_banner(void);

int main(void) {
    print_banner();

    double area = calc_area(5.5, 4.0);
    printf("Calculated Area: %.2lf sq units\n", area);

    return 0;
}

void print_banner(void) {
    printf("==============================\n");
    printf("    C FUNCTION DEMO PROGRAM   \n");
    printf("==============================\n");
}

double calc_area(double length, double width) {
    return length * width;
}

```

### Compiling & Running

```bash
# Navigate to directory
cd 08-functions

# Compile using GCC
gcc -Wall -Wextra functions.c -o functions

# Execute binary
./functions
```[cite: 1, 2, 4]

```

---