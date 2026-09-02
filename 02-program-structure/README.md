# 02. Structure of a C Program

Every C program follows a standard anatomical structure. Understanding this structure helps you write syntactically correct code.

---

## Anatomy of a C Program

1. **Preprocessor Directives (`#include <stdio.h>`)**
   - Lines starting with `#` are processed before actual compilation.
   - Tells the compiler to include standard library functions like `printf()`.

2. **The Entry Point (`int main(void)`)**
   - Every executable C program must have exactly one `main()` function.
   - Program execution always begins here.

3. **Code Blocks & Braces (`{ }`)**
   - Braces group statements together into a block.
   - All executable statements inside a function must reside within `{ }`.

4. **Statements & Semicolons (`;`)**
   - A statement is an instruction for the computer to execute.
   - In C, every individual statement **must** end with a semicolon `;`.

5. **Comments (`//` and `/* */`)**
   - **Single-line:** `// comment`
   - **Multi-line:** `/* comment */`
   - Comments are completely ignored by the compiler and are used to document code.

6. **Return Statement (`return 0;`)**
   - Terminates the `main()` function.
   - A return value of `0` signals to the operating system that the program executed successfully.

---

## Compilation & Execution

```bash
# Navigate to the module directory
cd 02-program-structure

# Compile with warnings enabled
gcc -Wall -Wextra program_structure.c -o program_structure.exe

# Run the executable (Windows)
.\program_structure.exe