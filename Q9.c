
// Program to find sum of series 1,2,3,4,..n 
#include<stdio.h>

int main() {
    int n, sum = 0;

    // take input of n
    printf("Enter no of terms: ");
    scanf("%d", & n);

    // calculate the sum using formula
    sum = (n * (n + 1)) / 2;

    
    printf("Sum: %d\n", sum);

    return 0;
}