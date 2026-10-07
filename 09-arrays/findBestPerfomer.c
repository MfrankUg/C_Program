/*
Find the Best Performer
CHALLENGE 2
Read 8 marks into an array.
Write findHighest() to return the highest mark.
Write findLowest() to return the lowest mark.
Write countAboveAverage() to count marks above the class average.
Bonus: write indexOfHighest() and display the student's position.
Use these 8 marks:  72, 55, 81, 40, 66, 93, 48, 75
*/

#include <stdio.h>
// functional prototypes
int findHighest(int marks[8], int size);
int findLowest(int marks[8], int size);
int countAboveAverage(int marks[8], int size);
int indexOfHighest(int marks[8], int size);

int main(){
   int marks[8] = {72, 55, 81, 40, 66, 93, 48, 75};
   printf("Highest mark : %d \n", findHighest(marks , 8));
   printf("Lowest marks: %d \n", findLowest(marks, 8));
   printf("average of  marks: %d \n", countAboveAverage(marks, 8));
    return 0;
}

int findHighest(int marks[8], int size){
    int highest = marks[0]; 
    for(int i = 0; i < size; i++){
        if(marks[i] > highest  ){
          highest = marks[i] ;
        }
    
    }
    return highest;
}

int findLowest(int marks[8], int size) {
    int lowest = marks[0];
    for (int i = 0; i < size; i++) {
        if(marks[i] < lowest){
            lowest = marks[i];
        }
    }
    return lowest;

}

int countAboveAverage(int marks[8], int size) {
     int sum; 
     for(int i = 0; i < size ; i++){
      sum += marks[i];
     }
 return sum / size;
       
}