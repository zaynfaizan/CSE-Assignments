#include<stdio.h>
// Program to display multiplication table of a given integer
int main()
{
   int i,n;
   printf("Enter the number for which the table is to be calculated : ");
   scanf("%d",&n);
   printf("\n");
   for(i=1;i<=10;i++)
   {
     printf("%d X %d = %d \n",n,i,n*i);
   }
} 