/*
Mini Gradebook
CHALLENGE 3
Team challenge: 20 minutes
There are 4 students and 3 tests. Store all marks in int marks[4][3].
Write readMarks() to fill the 2D array.
Write studentAverage() to return the average for one student (one row).
Write testAverage() to return the average for one test (one column).
Write bestStudent() to return the row index of the student with the highest average.
Display every student's average and identify the best student

*/

#include <stdio.h>
#define STUDENT 4
#define TEST 3

void readMarks(int marks[STUDENT][TEST]){
    for (int i = 0; i < STUDENT; i++) {
        printf("Enter %d test marks for Student %d:\n", TEST, i + 1);
        for (int j = 0; j < TEST; j++) {
            printf("  Test %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

}
double studentAverage(const int marks[STUDENT][TEST], int index){
int sum = 0;
    for (int j = 0; j < TEST; j++) {
        sum += marks[index][j];
    }
    return (double)sum / TEST;
}
double testAverage(const int marks[STUDENT][TEST], int index){
int sum = 0;
    for (int i = 0; i < STUDENT; i++) {
        sum += marks[i][index];
    }
    return (double)sum / STUDENT;
}
int bestStudent(){


}
int main(){

    return 0;
}