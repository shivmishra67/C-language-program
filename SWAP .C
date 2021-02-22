#include <stdio.h>
#include <conio.h>
 int main() {
	 double first, second, temp ;
	 printf ("Enter a number: ") ;
	 scanf ("%lf", &first);
	 printf ("Enter second number: ") ;
	 scanf ("%lf", &second);
	 // value of first is assigned to temp
	 temp = first ;
	 // value of second is assigned to first
	 first = second ;
	 // value of temp (initial value of first ) is assigned to second
	 second = temp ;
	 printf ("\n After swapping, firstNumber = %.2lf\n", first);
	  printf ("\n After swapping, secondNumber = %.2lf\n", second);
	  getch();
	  return 0;

	  }
