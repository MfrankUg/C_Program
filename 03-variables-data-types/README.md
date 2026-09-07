# 03. Variables & Data Types

Understanding variables and data types is essential for managing memory and processing data in C. Because C is a **statically typed** language, every variable must have its type declared before it can be used, giving the compiler explicit instructions on how much memory to allocate and how to interpret the raw bits stored inside.

---

## 1. What is a Variable?

A **variable** is a named location in the computer's memory used to hold data that can be read or changed during program execution.

### Declaration & Initialization
* **Declaration:** Tells the compiler the name and type of the variable.
* **Initialization:** Assigns an initial value to the variable.

```c
// Variable declaration
int score;

// Variable initialization
score = 100;

// Declaration and initialization in one step
int age = 25; 
Naming Rules for IdentifiersCan contain letters (A-Z, a-z), digits (0-9), and underscores (_).Must begin with a letter or an underscore (cannot start with a digit).C is case-sensitive (Age, age, and AGE are distinct variables).Cannot use C keywords (e.g., int, return, if, const).2. Basic Data TypesC provides four fundamental primitive data types:Data TypeTypical SizeDescriptionFormat SpecifierExamplechar1 ByteStores a single character or small integer%cchar grade = 'A';int4 BytesStores whole numbers (integers)%d or %iint count = 12;float4 BytesSingle-precision floating-point numbers%ffloat price = 19.99f;double8 BytesDouble-precision floating-point numbers%lfdouble pi = 3.14159265;Note: Data type sizes depend on system architecture, but the relative hierarchy (char $\le$ int $\le$ float $\le$ double) holds true.3. ConstantsA constant is a value that cannot be altered by the program during its execution.Using the const KeywordAdding the const modifier makes a variable read-only. Attempting to modify it results in a compilation error:C#include <stdio.h>

int main(void) {
    const float PI = 3.14159f;
    
    // PI = 3.14; // ERROR: assignment of read-only variable 'PI'
    
    printf("PI is: %.5f\n", PI);
    return 0;
}
4. Format SpecifiersFormat specifiers act as placeholders within functions like printf() and scanf() to denote data formatting.C#include <stdio.h>

int main(void) {
    int age = 20;
    double height = 5.9;
    char initial = 'J';

    printf("Initial: %c\n", initial);
    printf("Age: %d years old\n", age);
    printf("Height: %.1lf feet\n", height); // %.1lf limits output to 1 decimal place

    return 0;
}
5. Type ConversionType conversion occurs when evaluating expressions containing mixed data types.Implicit Type Conversion (Coercion)The C compiler automatically promotes smaller types to larger types to avoid loss of data precision before performing operations[cite: 1]:Cint num = 5;
double factor = 2.5;

// 'num' is implicitly converted to double (5.0) before multiplication
double result = num * factor; // result = 12.5
Explicit Type Conversion (Casting)You can manually force a conversion using the unary cast operator (type)[cite: 1]. This is crucial for avoiding unexpected integer division.C#include <stdio.h>

int main(void) {
    int total_marks = 450;
    int subjects = 5;

    // Integer division would discard decimals if not cast
    double average = (double)total_marks / subjects; 

    printf("Average: %.2lf\n", average);
    return 0;
}

---

### Folder Structure Setup

To mirror your `C-Start-Series` repository structure, place this source code example inside **`03-variables-data-types/variables.c`**[cite: 2]:

```c
#include <stdio.h>

int main(void) {
    // 1. Variable Declarations
    int student_id = 101;
    char grade = 'A';
    float gpa = 3.85f;
    const int PASSING_SCORE = 50;

    // 2. Display Values Using Format Specifiers
    printf("=== Student Details ===\n");
    printf("ID: %d\n", student_id);
    printf("Grade: %c\n", grade);
    printf("GPA: %.2f\n", gpa);
    printf("Passing Threshold: %d\n\n", PASSING_SCORE);

    // 3. Explicit Type Conversion Example
    int total_score = 287;
    int total_exams = 3;
    
    // Explicitly casting total_score to double to get exact average
    double average_score = (double)total_score / total_exams;
    printf("Calculated Average: %.2lf\n", average_score);

    return 0;
}