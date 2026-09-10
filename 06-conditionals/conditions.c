/* practice on a simple grading system
90 to 100 = A+
80 to 89  = A
75 to 79  = B+
70 to 74  = B
65 to 69  = C+
60 to 64  = C
55 to 59  = D+
50 to 54  = D
0  to 49  = Retake
*/

#include <stdio.h>

int main(void) {
    printf("===========================================\n");
    printf("           MAK GRADING SYSTEM              \n");
    printf("===========================================\n");

    int grade;

    printf("Enter your marks to be graded: ");
    scanf("%d", &grade); // Must remove '\n' from inside scanf to avoid an issues with left overs that might break the system.

    // Validate boundaries first
    if (grade < 0 || grade > 100) {
        printf("%d is an invalid mark! (Enter 0-100)\n", grade);
    }
    // Sequential evaluation ensures marks above upper bounds were already handled
    else if (grade >= 90) {
        printf("%d marks -> Grade: A+\n", grade);
    }
    else if (grade >= 80) {
        printf("%d marks -> Grade: A\n", grade);
    }
    else if (grade >= 75) {
        printf("%d marks -> Grade: B+\n", grade);
    }
    else if (grade >= 70) {
        printf("%d marks -> Grade: B\n", grade);
    }
    else if (grade >= 65) {
        printf("%d marks -> Grade: C+\n", grade);
    }
    else if (grade >= 60) {
        printf("%d marks -> Grade: C\n", grade);
    }
    else if (grade >= 55) {
        printf("%d marks -> Grade: D+\n", grade);
    }
    else if (grade >= 50) {
        printf("%d marks -> Grade: D\n", grade);
    }
    else {
        printf("%d marks -> Grade: Retake (F)\n", grade);
    }

    return 0;
}