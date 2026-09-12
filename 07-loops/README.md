turn this to markdown perfectly 


# 07. Loops

Loops allow a program to execute a block of code repeatedly as long as a specified condition remains true. They eliminate repetitive code, control execution flow, and serve as the backbone for traversing data structures such as arrays and strings.

---

## 1. Loop Types Overview

C provides three primary loop constructs categorized by where the loop condition is evaluated:

* **Entry-Controlled Loops (`for`, `while`):** Evaluate the condition *before* executing the loop body. If the condition is false initially, the loop body never runs.


* **Exit-Controlled Loops (`do...while`):** Evaluate the condition *after* executing the loop body. This guarantees the body executes **at least once** regardless of the initial condition.



```
| Loop Type | Evaluation Timing | Guaranteed Executions | Primary Use Case |
| --------- | ----------------- | --------------------- | ---------------- |
```
| **`for`** | Entry (Before body)

| 0

| Fixed or known number of iterations

|
| **`while`** | Entry (Before body)

| 0

| Indefinite condition-based looping

|
| **`do...while`** | Exit (After body)

| 1

| Interactive menus, input validation |

---

## 2. Detailed Syntax & Behavior

### The `for` Loop

Consolidates initialization, condition checking, and counter update into a single line.

```c
for (initialization; condition; update) {
// Code block executed while condition is true
}

```

* **Execution Order:**
1. `initialization` (runs once at entry)
2. `condition` evaluation
3. Loop body execution (if condition is non-zero/true)
4. `update` statement
5. Repeat steps 2–4



### The `while` Loop

Best used when the total number of iterations depends on dynamic conditions rather than a fixed count.

```c
while (condition) {
// Code block executed while condition is true
// Must update condition variable to avoid infinite loops
}

```

### The `do...while` Loop

Guarantees execution before testing the expression. Note the mandatory trailing semicolon `;` after the condition.

```c
do {
// Code block executed at least once
} while (condition);

```

---

## 3. Loop Control Statements & Nesting

### `break` vs `continue`

* **`break`:** Exits the innermost loop immediately, jumping to the statement following the loop.


* **`continue`:** Skips the remaining statements in the current iteration and jumps directly to the condition check (`while`/`do...while`) or update phase (`for`).



### Nested Loops

A loop placed inside another loop. For each single pass of the outer loop, the inner loop executes completely through all of its iterations.

```c
// Outer loop controls rows, inner loop controls columns
for (int row = 0; row < 3; row++) {
for (int col = 0; col < 3; col++) {
printf("[%d,%d] ", row, col);
}
printf("\n");
}

```

---

## 4. Source Code Example (`07-loops/loops.c`)

```c
#include <stdio.h>

int main(void) {
// 1. do-while: Interactive Input Validation (Guaranteed 1 execution)
int count;
do {
printf("Enter a positive loop count (1 to 10): ");
if (scanf("%d", &count) != 1) {
printf("Invalid input read error!\n");
return 1;
}
} while (count < 1 || count > 10);

// 2. while loop with break
printf("\n--- Countdown (while loop) ---\n");
int current = count;
while (current > 0) {
if (current == 3) {
printf("Break triggered at current = 3!\n");
break;
}
printf("%d...\n", current);
current--;
}

// 3. for loop with continue
printf("\n--- Even Numbers Up To %d (for loop) ---\n", count);
for (int i = 1; i <= count; i++) {
if (i % 2 != 0) {
continue; // Skip odd numbers
}
printf("%d ", i);
}
printf("\n");

// 4. Nested loops (3x3 Coordinate Grid)
printf("\n--- Nested Loops (3x3 Grid) ---\n");
for (int r = 0; r < 3; r++) {
for (int c = 0; c < 3; c++) {
printf("(%d,%d) ", r, c);
}
printf("\n");
}

return 0;
}

```

---

## 5. Compilation & Version Control Workflow

```bash
# Navigate to directory
cd 07-loops

# Compile with strict warnings enabled
gcc -Wall -Wextra -g loops.c -o loops

# Run binary
./loops

```

```bash
# Stage, commit, and push updates
git add 07-loops/
git commit -m "Add 07-loops markdown documentation and source code examples"
git push origin main

```