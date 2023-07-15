#include<stdio.h>
// Program to find factorial of any number n
int main(){

    int x,fact=1,n;

    printf("Enter a number to find factorial: ");

    scanf("%d",&n); 

    for(x=1;x<=n;x++)

        fact=fact*x; 

    printf("Factorial of %d is: %d\n",n,fact);

    return 0;

}