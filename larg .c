#include <stdio.h>
int main () {
    double n1 , n2 , n3 ;
    printf("Enter three different numbers: ");
    scanf("%1f %1f %1f", &n1, &n2, &n3);
    printf("n1 number is shown = %1f", n1);
    // if n1 is greater then both n2 and n3 , n2 is the largest
    if(n1 >= n2 && n1 >= n3)
    printf("%.2f is the largest number." , n1);

     // if n2 is greater then both n1 and n3 , n3 is the largest
    if(n2 >= n1 && n2 >= n3)
    printf("%.2f is the largest number." , n2);

     // if n3is greater then both n1 and n2 , n3is the largest
    if(n3 >= n1 && n3 >= n2)
    printf("%.2f is the largest number." , n3);
        
        return 0;
          }