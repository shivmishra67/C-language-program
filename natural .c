#include <stdio.h>
int main () {
    int n ,i, sum = 0;
    printf( "Enter the positive number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; ++i) {
        sum += 1;
    }
printf("sum = %d", sum);
return 0;
}