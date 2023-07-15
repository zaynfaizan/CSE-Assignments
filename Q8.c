#include<stdio.h>
//Program to display series 1,2,3,4 ,N for given value of N
int main()
{
 int i, N;
 printf("Enter N:");
 scanf("%d", &N);

 for(i=1; i<=N; i++)
 {
  printf("%d\n",i);
  
  if(i!=N)
   printf(", ");
 }
 return 0; }