#include<stdio.h>
int main()
//Program to find sum of series 1,3,5..n
{
    int n,sum=0,i=1;
    printf("Enter the number upto which u want to find the sum of odd series\n:");
    scanf("%d",&n);

    while(i<=n)
    {
        sum+=i;
        i+=2;
    }
    printf("The sum of the series = %d\n",sum);
}
