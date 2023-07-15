#include<stdio.h>
int main() {
    //Program to check whether a number is even or odd 
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if(num / 2 == 0)
        printf("%d is even\n.", num);
    else
        printf("%d is odd\n.", num);
    
    return 0;
}