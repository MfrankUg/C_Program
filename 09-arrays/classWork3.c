/*
Exercise 3: Mini Gradebook (2D Arrays & Nested Loops)
Goal: Practice working with 2D matrices, nested loops, row-wise calculations, and column-wise calculations using functions.

Given Grid Structure: A 2D array representing 4 students across 3 tests:

C
int marks[4][3] = {
    {70, 60, 80},
    {55, 67, 72},
    {90, 84, 88},
    {40, 50, 45}
};
Task Requirements:

Implement void readMarks(int rows, int cols, int marks[rows][cols]) to populate a 2D array via input.

Implement double studentAverage(int cols, const int studentMarks[]) (or passing the 2D array along with the student index) to return the average mark for a specific student (row).

Implement double testAverage(int rows, int cols, const int marks[rows][cols], int testIndex) to return the average mark for a specific test (column).

Implement int bestStudent(int rows, int cols, const int marks[rows][cols]) to calculate each student's average and return the row index of the student with the highest overall average.

In main(), print each student's average and indicate who the top performing student is.

*/