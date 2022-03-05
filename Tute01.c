/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mrk1,mrk2;
  float avg;
  printf("Enter yor mark1:");
  scanf("%d",& mrk1);
    printf("Enter yor mark2:");
  scanf("%d",& mrk2);
  avg=(mrk1+mrk2)/2;
  printf("Average of the subjects:%.2f",avg);
  return 0;
}

