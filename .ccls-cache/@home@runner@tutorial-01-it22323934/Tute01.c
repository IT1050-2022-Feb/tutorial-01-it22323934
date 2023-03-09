/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mark1;
  float mark2;
  float sum=0;
  float average;
  printf("Enter mark 1: ");
  scanf("%f",&mark1);
  printf("Enter mark 2:");
  scanf("%f",&mark2);
  sum=mark1+mark2;
  average=sum/2;
  printf("The average is :%.2f",average);
  return 0;
}

