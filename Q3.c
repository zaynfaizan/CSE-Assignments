#include <stdio.h>
//Program to find sum of natural numbers upto n
int main()
{
   int i,n,sum=0;
   printf("Enter the value of n : ");
   scanf("%d",&n);
   printf("The first %d natural numbers are:\n",n);
   for(i=1;i<=n;i++)
   {
     printf("%d ",i);
     sum+=i;
   }
   printf("\nThe Sum of natural numbers upto %d terms : %d \n",n,sum);
   return 0;
}

