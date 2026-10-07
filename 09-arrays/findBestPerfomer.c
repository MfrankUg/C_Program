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
   findHighest(marks , 8);
   findLowest(marks, 8);
    return 0;
}

int findHighest(int marks[8], int size){
    int highest = marks[0]; 
    for(int i = 0; i < size; i++){
        if(marks[i] > highest  ){
          highest = marks[i] ;
        }
    
    }
    return printf("Highest mark : %d \n", highest);
}

int findLowest(int marks[8], int size) {
    int lowest = marks[0];
    for (int i = 0; i < 8 ; i++) {
        if(marks[i] < lowest){
            lowest = marks[i];
        }
    }
    return printf("Lowest marks: %d \n", lowest);

}

int countAboveAverage(int marks[8], int size) {

    
}