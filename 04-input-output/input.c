// practice on the use of printf() and scanf();
// Develop a program that lets a student enter name, age, height and grade and print out those values 
#include <stdio.h>

int main(){
    char name[15];
    int age;
    double height;
    char grade;
  printf("====================================\n");
  printf("  WELCOME TO  MUELE SYSTEM PORTAL  \n");
  printf("====================================\n");
  printf("\n");
  printf("Enter your name.\n");
  scanf("%s", name);
  printf("Enter your age.\n");
  scanf("%d", &age);
  printf("Enter your height.\n");
  scanf("%lf", &height);
  printf("Enter your grade.\n");
  scanf(" %c", &grade);
  // printing out of the input values
  printf("SUMMARY OF ENTERED VALUES.\n");
  printf("Student Name: %s.\n", name);
  printf("Student Age: %d.\n", age);
  printf("Student Height: %.1lf.\n", height);
  printf("Student Grade: %c.\n", grade);

 return 0;
}