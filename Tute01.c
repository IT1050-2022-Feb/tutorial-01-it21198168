/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int i,mark,sum=0;
  float avg;
  for(i=1;i<=2;i++)
  {printf("Enter a mark");
  scanf("%d",& mark);
  sum=sum+mark;}
  avg=sum/2.0;
  printf("Average mark%f",avg);

  return 0;
}

