#include<stdio.h>
#include<conio.h>
  int main()
 {
    float first , second ;
     char opt;
	 //start the  calculator program
     printf("*********calculator*****\n:" );
	 // select the operator
     printf(" Enter the operator (+, -, * ,/) : ");
     scanf("%c" , &opt);
	 // write two number
     printf(" Enter two operands\n: ");
     scanf("%f %f", &first , &second);
	 // here to print first number
     printf("you enetred:= %f\n", first );
	// here to print second number
     printf("you enetred:= %f\n", second);
    // calculating start
 switch (opt) {
  case '+':
	 printf("%.1lf + %.1lf = %1lf", first , second, first + second);
	 break;
   case '-':
	   printf("%1.lf + %1.lf = %1lf", first , second, first - second );
	    break;
   case '*':
	  printf("%1.lf *  %1.lf = %1.lf", first , second , first * second );
	   break;
   case '/':
	  printf("%1.lf / %1.lf = %1.lf", first, second , first / second );
	    break;
		// if any number is false to show given result.
     default:("it is not correct input");
 }  getch();
 return 0;
	 
	 }
