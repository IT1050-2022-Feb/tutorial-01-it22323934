/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  float distance;
  float price;
  printf("Enter the distance: ");
  scanf("%f",&distance);//assigns the user entered value to distance variable.
  if(distance<=30&&distance>0){//checks if the distance is less than 30 and greater than 0 if the condition is true this code will be executed.
    price=distance*50;//calculates the price.
    printf("The total price is:%.2f",price);//displays the price.
  }
  else if(distance>30){//checks if the distance is greater than 30.if the condition is true this code will be executed.
    price=30*50+((distance-30)*40);//calculates the price.
    printf("The total price is:%.2f",price);//displays the price.
  }
  else{//checks to see if the user inputs a invalid value such as a negative value for the distance.
    printf("Invalid input");
  }
  return 0;
}
