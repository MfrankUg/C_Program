/*
Store marks for 5 students in an integer array.
Write readMarks() to input the marks.
Write averageMark() to return the class average.
Write countPasses() to return how many marks are ≥ 50.
main() should call the functions and display the results.

*/

#include <stdio.h>

void readMarks(int marks[] , const int size); // functional prototype
float averageMark(int marks[] , const int size);
int countPasses(int marks[] , const int size); 

int main(){
    int marks[5]; 
 readMarks(marks, 5); 
 float average = averageMark(marks, 5);
 printf("Average of the marks: %.2f \n", average); 
 int countAbove = countPasses(marks , 5);
 printf("Marks above 50: %d \n", countAbove); 
 return 0; 

}

void readMarks(int marks[] , const int size){
  printf("Enter your 5 Marks\n");
   for(int i = 0; i<size; i++){
     scanf("%d", &marks[i]);
   }

   printf("Your 5 Marks:\n");
   for(int i = 0; i < size; i++){
     printf("%d ", marks[i]);
   }
  printf("\n");
};

// Average marks  
float averageMark(int marks[] , const int size){
    float sum = 0; 
    for( int i = 0; i < size; i++){
         sum += marks[i]; 
    }
    return (sum / size);
}
// Count pass >= 50 

int countPasses(int marks[] , const int size){
    int count = 0;
    for( int i = 0; i < 5; i++){
      if(marks[i] >= 50) {
        count++;
      }  
    }
    return count; 
}