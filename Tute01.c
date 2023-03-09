/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mark1;
  float mark2;
  float sum=0;
  float average;
  printf("Enter mark 1: ");
  scanf("%f",&mark1);//assigns the value the user entered to the mark1 variable.
  printf("Enter mark 2:");
  scanf("%f",&mark2);//assigns the value the user entered to the mark2 variable.
  sum=mark1+mark2;//calculates the sum.
  average=sum/2;//calculates the average.
  printf("The average is :%.2f",average//prints the average.
  return 0;
}

