# C Programming Operators

Operators are special symbols used in C programming to perform operations on variables, constants, and values. They tell the compiler what operation should be performed, such as **addition, subtraction, comparison, assignment, or logical evaluation**.

For example:

```c
int x = 10;
int y = 5;

int sum = x + y;
```

Here, `+` is an **operator** because it tells C to add `x` and `y`.

---

## 1. Arithmetic Operators

Arithmetic operators are used to perform mathematical calculations.

| Operator | Name           | Example | Result |
| -------- | -------------- | ------- | -----: |
| `+`      | Addition       | `5 + 3` |    `8` |
| `-`      | Subtraction    | `5 - 3` |    `2` |
| `*`      | Multiplication | `5 * 3` |   `15` |
| `/`      | Division       | `6 / 3` |    `2` |
| `%`      | Modulus        | `7 % 3` |    `1` |

### Example

```c
#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 3;

    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Remainder: %d\n", a % b);

    return 0;
}
```

### Important: Integer Division

When both operands are integers, C performs integer division.

```c
int result = 7 / 2;
```

The result is:

```text
3
```

The decimal part is discarded.

However:

```c
float result = 7.0 / 2.0;
```

produces:

```text
3.5
```

---

# 2. Assignment Operators

Assignment operators are used to assign or update values stored in variables.

| Operator | Name                   | Example               | Equivalent To     |      |        |    |
| -------- | ---------------------- | --------------------- | ----------------- | ---- | ------ | -- |
| `=`      | Assignment             | `x = 5`               | Assign `5` to `x` |      |        |    |
| `+=`     | Add and assign         | `x += 3`              | `x = x + 3`       |      |        |    |
| `-=`     | Subtract and assign    | `x -= 3`              | `x = x - 3`       |      |        |    |
| `*=`     | Multiply and assign    | `x *= 3`              | `x = x * 3`       |      |        |    |
| `/=`     | Divide and assign      | `x /= 3`              | `x = x / 3`       |      |        |    |
| `%=`     | Modulus and assign     | `x %= 3`              | `x = x % 3`       |      |        |    |
| `&=`     | Bitwise AND and assign | `x &= 3`              | `x = x & 3`       |      |        |    |
| `        | =`                     | Bitwise OR and assign | `x                | = 3` | `x = x | 3` |
| `^=`     | Bitwise XOR and assign | `x ^= 3`              | `x = x ^ 3`       |      |        |    |
| `<<=`    | Left shift and assign  | `x <<= 2`             | `x = x << 2`      |      |        |    |
| `>>=`    | Right shift and assign | `x >>= 2`             | `x = x >> 2`      |      |        |    |

### Example

```c
int x = 10;

x += 5;
```

This is equivalent to:

```c
x = x + 5;
```

Therefore:

```text
x = 15
```

---

# 3. Increment and Decrement Operators

The increment and decrement operators are particularly important in C.

| Operator | Name           | Operation                          |
| -------- | -------------- | ---------------------------------- |
| `++x`    | Pre-increment  | Increase first, then use the value |
| `x++`    | Post-increment | Use the value first, then increase |
| `--x`    | Pre-decrement  | Decrease first, then use the value |
| `x--`    | Post-decrement | Use the value first, then decrease |

These operators increase or decrease a variable by exactly `1`.

---

## 3.1 Post-Increment: `x++`

The expression:

```c
x++
```

means:

> Use the current value of `x`, then increase `x` by `1`.

For example:

```c
int x = 2;

printf("%d", x++);
```

The system prints:

```text
2
```

Afterward:

```text
x = 3
```

---

## 3.2 Pre-Increment: `++x`

The expression:

```c
++x
```

means:

> Increase `x` by `1`, then use the new value.

For example:

```c
int x = 2;

printf("%d", ++x);
```

The system prints:

```text
3
```

Afterward:

```text
x = 3
```

---

## 3.3 Post-Decrement: `x--`

The expression:

```c
x--
```

means:

> Use the current value of `x`, then decrease `x` by `1`.

Example:

```c
int x = 2;

printf("%d", x--);
```

The system prints:

```text
2
```

Afterward:

```text
x = 1
```

---

## 3.4 Pre-Decrement: `--x`

The expression:

```c
--x
```

means:

> Decrease `x` by `1`, then use the new value.

Example:

```c
int x = 2;

printf("%d", --x);
```

The system prints:

```text
1
```

Afterward:

```text
x = 1
```

---

## 3.5 Comparison of All Four

Assume `c = 2` is the starting value for **each separate example**.

| Command              | What the System Prints | What Is Stored in Memory Afterward | Timing Rule                        |
| -------------------- | ---------------------: | ---------------------------------: | ---------------------------------- |
| `printf("%d", c++);` |                  **2** |                              **3** | Use current value, then add 1      |
| `printf("%d", ++c);` |                  **3** |                              **3** | Add 1, then use new value          |
| `printf("%d", c--);` |                  **2** |                              **1** | Use current value, then subtract 1 |
| `printf("%d", --c);` |                  **1** |                              **1** | Subtract 1, then use new value     |

### Easy way to remember

```text
POSTFIX
c++   → USE → CHANGE
c--   → USE → CHANGE

PREFIX
++c   → CHANGE → USE
--c   → CHANGE → USE
```

---

# 4. Relational Operators

Relational operators are used to compare two values.

They produce either:

```text
1 → true
0 → false
```

| Operator | Meaning                  | Example  | Result |
| -------- | ------------------------ | -------- | ------ |
| `==`     | Equal to                 | `5 == 5` | `1`    |
| `!=`     | Not equal to             | `5 != 3` | `1`    |
| `>`      | Greater than             | `5 > 3`  | `1`    |
| `<`      | Less than                | `5 < 3`  | `0`    |
| `>=`     | Greater than or equal to | `5 >= 5` | `1`    |
| `<=`     | Less than or equal to    | `3 <= 5` | `1`    |

### Example

```c
int age = 20;

printf("%d", age >= 18);
```

The result is:

```text
1
```

because `20 >= 18` is true.

### Important Difference Between `=` and `==`

This is one of the most common mistakes for beginners.

```c
x = 5;
```

means:

> Assign `5` to `x`.

While:

```c
x == 5;
```

means:

> Check whether `x` is equal to `5`.

For example:

```c
if (x == 5)
{
    printf("x is 5");
}
```

---

# 5. Logical Operators

Logical operators are used to combine or reverse conditions.

| Operator | Name        | Example           | Meaning                      |         |   |         |                                     |
| -------- | ----------- | ----------------- | ---------------------------- | ------- | - | ------- | ----------------------------------- |
| `&&`     | Logical AND | `x > 0 && x < 10` | Both conditions must be true |         |   |         |                                     |
| `        |             | `                 | Logical OR                   | `x == 1 |   | x == 2` | At least one condition must be true |
| `!`      | Logical NOT | `!(x == 5)`       | Reverses true/false          |         |   |         |                                     |

### Logical AND: `&&`

```c
int age = 20;

if (age >= 18 && age <= 30)
{
    printf("Age is within the range");
}
```

Both conditions must be true.

### Logical OR: `||`

```c
int day = 1;

if (day == 1 || day == 7)
{
    printf("Weekend");
}
```

Only one of the conditions needs to be true.

### Logical NOT: `!`

```c
int x = 5;

if (!(x == 10))
{
    printf("x is not 10");
}
```

`x == 10` is false, and `!` reverses it to true.

---

# 6. Bitwise Operators

Bitwise operators work directly with the individual bits of integer values.

| Operator | Name        | Example    |    |    |
| -------- | ----------- | ---------- | -- | -- |
| `&`      | Bitwise AND | `x & y`    |    |    |
| `        | `           | Bitwise OR | `x | y` |
| `^`      | Bitwise XOR | `x ^ y`    |    |    |
| `~`      | Bitwise NOT | `~x`       |    |    |
| `<<`     | Left shift  | `x << 2`   |    |    |
| `>>`     | Right shift | `x >> 2`   |    |    |

For example:

```text
5 = 0101
3 = 0011
```

Bitwise AND:

```text
0101
0011
----
0001
```

Therefore:

```c
5 & 3
```

produces:

```text
1
```

Bitwise operators are commonly used in areas such as **embedded systems, hardware programming, networking, and low-level programming**.

---

# 7. Conditional Operator

The conditional operator is also called the **ternary operator** because it uses three operands.

Its syntax is:

```c
condition ? value_if_true : value_if_false;
```

Example:

```c
int age = 20;

int result = (age >= 18) ? 1 : 0;
```

If `age >= 18` is true:

```text
result = 1
```

Otherwise:

```text
result = 0
```

A common example is:

```c
int a = 10;
int b = 20;

int max = (a > b) ? a : b;
```

The result is:

```text
max = 20
```

The conditional operator can sometimes replace a simple `if-else` statement.

---

# 8. `sizeof` Operator

The `sizeof` operator determines the amount of memory occupied by a type or object.

Example:

```c
int x;

printf("%zu", sizeof(x));
```

The exact size of `int` is implementation-dependent, although it is commonly 4 bytes on modern systems.

You can also use:

```c
sizeof(int)
```

or:

```c
sizeof(double)
```

Example:

```c
printf("%zu\n", sizeof(int));
printf("%zu\n", sizeof(double));
```

`sizeof` returns a value of type `size_t`, so `%zu` is the appropriate `printf` format specifier.

---

# 9. Comma Operator

The comma operator `,` allows expressions to be evaluated from left to right, with the value of the entire comma expression being the value of the rightmost expression.

Example:

```c
int x;

x = (2, 4, 6);
```

The expressions are evaluated in order:

```text
2 → 4 → 6
```

The final value is:

```text
x = 6
```

The comma operator is different from the commas used simply to separate function arguments or variable declarations.

---

# 10. Pointer Operators

Pointers are an important part of C, and two important operators are:

| Operator | Name        | Purpose                                 |
| -------- | ----------- | --------------------------------------- |
| `&`      | Address-of  | Gets the memory address of a variable   |
| `*`      | Dereference | Accesses the value stored at an address |

Example:

```c
int x = 10;
int *p = &x;
```

Here:

```text
x       → contains 10
&x      → address of x
p       → stores the address of x
*p      → value stored at that address
```

Therefore:

```c
printf("%d", *p);
```

prints:

```text
10
```

---

# 11. Member Access Operators

C provides operators for accessing members of structures and unions.

| Operator | Name                  | Example            |
| -------- | --------------------- | ------------------ |
| `.`      | Direct member access  | `student.age`      |
| `->`     | Pointer member access | `student_ptr->age` |

Example using `.`:

```c
struct Student
{
    int age;
};

struct Student student;

student.age = 20;
```

Example using `->`:

```c
struct Student *ptr = &student;

ptr->age = 20;
```

The expression:

```c
ptr->age
```

is essentially equivalent to:

```c
(*ptr).age
```

---

# 12. Cast Operator

A cast is used to explicitly convert a value from one data type to another.

Syntax:

```c
(type) value
```

Example:

```c
int a = 5;
int b = 2;

float result = (float)a / b;
```

Without the cast:

```c
a / b
```

performs integer division.

With:

```c
(float)a
```

the division becomes floating-point division.

Therefore:

```text
5 / 2       → 2
(float)5/2  → 2.5
```

---

# 13. Operator Precedence

When an expression contains multiple operators, C uses **operator precedence** to determine which operators are grouped first.

For example:

```c
int result = 2 + 3 * 4;
```

Multiplication has higher precedence than addition.

Therefore:

```text
3 * 4 = 12
2 + 12 = 14
```

So:

```text
result = 14
```

It is equivalent to:

```c
int result = 2 + (3 * 4);
```

If you want addition to happen first, use parentheses:

```c
int result = (2 + 3) * 4;
```

Now:

```text
2 + 3 = 5
5 * 4 = 20
```

Therefore:

```text
result = 20
```

### Common Precedence Order

From higher to lower precedence:

| Priority | Operators                                   | Description                             |            |            |
| -------: | ------------------------------------------- | --------------------------------------- | ---------- | ---------- |
|        1 | `()` `[]` `.` `->`                          | Function calls, indexing, member access |            |            |
|        2 | `++` `--` `!` `~` `*` `&` `sizeof` `(type)` | Unary operators                         |            |            |
|        3 | `*` `/` `%`                                 | Multiplication, division, modulus       |            |            |
|        4 | `+` `-`                                     | Addition and subtraction                |            |            |
|        5 | `<<` `>>`                                   | Bitwise shifts                          |            |            |
|        6 | `<` `<=` `>` `>=`                           | Relational operators                    |            |            |
|        7 | `==` `!=`                                   | Equality operators                      |            |            |
|        8 | `&`                                         | Bitwise AND                             |            |            |
|        9 | `^`                                         | Bitwise XOR                             |            |            |
|       10 | `                                           | `                                       | Bitwise OR |            |
|       11 | `&&`                                        | Logical AND                             |            |            |
|       12 | `                                           |                                         | `          | Logical OR |
|       13 | `?:`                                        | Conditional operator                    |            |            |
|       14 | Assignment operators                        | `=`, `+=`, `-=`, etc.                   |            |            |
|       15 | `,`                                         | Comma operator                          |            |            |

Parentheses can be used to make the intended order explicit:

```c
int result = (a + b) * c;
```

---

# 14. Associativity

When two operators have the same precedence, **associativity** determines the direction in which they are grouped.

Most arithmetic operators associate from **left to right**.

For example:

```c
int result = 20 / 5 * 2;
```

Both `/` and `*` have the same precedence and associate left-to-right:

```text
20 / 5 = 4
4 * 2 = 8
```

Therefore:

```text
result = 8
```

Assignment operators associate from **right to left**.

For example:

```c
a = b = c = 10;
```

This is evaluated as:

```c
a = (b = (c = 10));
```

---

# 15. The Four Increment and Decrement Operators at a Glance

If `c = 2` at the beginning of each independent example:

| Expression | First Action | Value Used | Final Value of `c` |
| ---------- | ------------ | ---------: | -----------------: |
| `c++`      | Use `c`      |        `2` |                `3` |
| `++c`      | Increase `c` |        `3` |                `3` |
| `c--`      | Use `c`      |        `2` |                `1` |
| `--c`      | Decrease `c` |        `1` |                `1` |

### Example

```c
int c = 2;

int a = c++;
```

After this:

```text
a = 2
c = 3
```

Whereas:

```c
int c = 2;

int a = ++c;
```

produces:

```text
a = 3
c = 3
```

---

# 16. Important Warning About `++` and `--`

Avoid modifying the same variable multiple times within a single expression when the evaluation order is not guaranteed.

For example:

```c
int x = 3;
int y = 4;

int z = x++ * --y + ++x;
```

This should **not** be used as an example where you expect a guaranteed result.

The variable `x` is modified by both:

```c
x++
```

and:

```c
++x
```

within the same full expression. C does not provide the required sequencing between those modifications, so the expression has **undefined behavior**.

Instead, write the operations separately:

```c
int x = 3;
int y = 4;

int a = x++;
int b = --y;
int c = ++x;

int z = a * b + c;
```

Now the order is explicit and the result is well-defined:

```text
x = 3
a = 3
x = 4

y = 3
b = 3

x = 5
c = 5

z = 3 * 3 + 5
z = 14
```

---

# 17. Summary of C Operators

| Category            | Main Operators     | Main Purpose                              |                            |                               |
| ------------------- | ------------------ | ----------------------------------------- | -------------------------- | ----------------------------- |
| Arithmetic          | `+ - * / %`        | Mathematical calculations                 |                            |                               |
| Assignment          | `= += -= *= /= %=` | Store or update values                    |                            |                               |
| Increment/Decrement | `++ --`            | Increase or decrease by 1                 |                            |                               |
| Relational          | `== != > < >= <=`  | Compare values                            |                            |                               |
| Logical             | `&&                |                                           | !`                         | Combine or reverse conditions |
| Bitwise             | `&                 | ^ ~ << >>`                                | Manipulate individual bits |                               |
| Conditional         | `?:`               | Short form of simple conditional logic    |                            |                               |
| `sizeof`            | `sizeof`           | Determine size in memory                  |                            |                               |
| Comma               | `,`                | Evaluate expressions in sequence          |                            |                               |
| Pointer             | `& *`              | Work with addresses and pointed-to values |                            |                               |
| Member access       | `. ->`             | Access structure/union members            |                            |                               |
| Type cast           | `(type)`           | Explicitly convert data types             |                            |                               |

---

# 18. Key Things to Remember

1. `+`, `-`, `*`, `/`, and `%` are **arithmetic operators**.
2. `=` assigns a value; `==` compares two values.
3. `x++` uses the value **before** incrementing.
4. `++x` increments the value **before** using it.
5. `x--` uses the value **before** decrementing.
6. `--x` decrements the value **before** using it.
7. Relational operators normally produce `1` for true and `0` for false.
8. `&&`, `||`, and `!` are logical operators.
9. Bitwise operators work at the level of individual bits.
10. Parentheses can make the intended order of operations clear.
11. Operator **precedence** determines which operators bind more strongly.
12. Operator **associativity** determines grouping when operators have the same precedence.
13. Avoid modifying the same variable multiple times in one expression when the modifications are not properly sequenced.
14. The `sizeof` operator is useful for understanding memory usage.
15. The pointer operators `&` and `*` are fundamental when working with memory addresses.
