#include <stdio.h>
#include <conio.h>
 int main() {
 float a, b, pt ;
 printf("\nEnter first number: ");
 scanf("%f", &a);
 printf("Enter second number: ");
  scanf("%f", &b);

 // calculating product
     pt = a * b;
 // result up to 2 decimal point is displayed using %.21f
  printf("pt=  %2f", pt);
  getch();
  return 0;
  }