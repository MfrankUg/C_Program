/*
Question 2. (8Marks) 
Using the set of scores [78,89,30,23,100,23,78,22,90,92,50],
show how the bubble sort algorithm can be used to sort the scores. 
(Please Indicate the new array after each step)
*/

#include <stdio.h>
int main(){

    int score[]= {78,89,30,23,100,23,78,22,90,92,50};
    int size = sizeof(score)/sizeof(score[0]);
    // Implementing Bubble sort 
    for(int i=0; i < size; i++){
     for(int j=0; j<(size-i-1); j++) {
       // Swapping 
       if(score[j] > score[j+1] ){
        int temp = score[j];
        score[j] = score[j+1];
        score[j+1] = temp;
       }
       //printf(" %d",score[i]);
     }
    }

    // output
    for(int k=0; k < size; k++){
     printf(" %d",score[k]);
    }
}
