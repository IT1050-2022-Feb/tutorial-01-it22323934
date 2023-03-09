/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int sum=0;
  int number;
  int x=1;
  printf("Enter the number: ");
  scanf("%d",&number);//assigns the user input value to the number variable.
  while(x<=number){//the loop will execute number x becomes greater than the user input number.
    sum=x+sum;//calculates the sum.
    x++;//increment.
  }
  printf("The sum:%d",sum);//displays the final sum.
  return 0;
}