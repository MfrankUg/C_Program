/*
Programming Task: City Temperature Analyzer
Scenario:
Write a C program that tracks and analyzes daily temperatures recorded across 3 cities over 4 days.

Task Requirements:

Use #define macros to set CITIES to 3 and DAYS to 4.

Inside main(), declare a 2D array of type double using these defined constants to hold the temperature data.

Implement a function named readTemperatures() to populate the 2D array with user input using nested loops and scanf().

Implement a function named cityAverage() that calculates and returns the average temperature for a given city (one row).

Implement a function named findMaxTemperature() that searches the entire 2D array and returns the absolute highest temperature recorded across all cities and days.

In main(), call your functions to populate the grid, display each city's average temperature, and print the overall highest temperature found.
*/

#include <stdio.h>
#define CITIES 3
#define DAYS 4

void readTemperature(double temperatureData[CITIES][DAYS]){
    // Entering data
   for (int row = 0; row < CITIES; row++){
    for (int col = 0; col < DAYS; col++){
      printf("Enter the City %d and temperature %d\n",row + 1 , col + 1);
      scanf("%lf",&temperatureData[row][col]);
    } 
   }
   printf("\n Temperature Records:\n");
   // Printing info
   for (int row = 0; row < CITIES; row++){
     printf("Enter the City %d: \n",row + 1 );
    for (int col = 0; col < DAYS; col++){
      //printf("Enter the row %d and col %d\n",row , col);
      printf("%.1lf \t",temperatureData[row][col]);
    } 
      printf("\n");
   }
   printf("\n");

 
}

double cityAverage(double temperatureData[CITIES][DAYS], int city){
       int sum = 0; 
       for(int day = 0; day< DAYS; day++){
       sum += temperatureData[city][day]; 
    }
    return sum / DAYS; 
}

int main(){
   double temperatureData[CITIES][DAYS];
   readTemperature(temperatureData); 
   
   printf("%f \n",cityAverage(temperatureData,0)); 
   return 0; 
}