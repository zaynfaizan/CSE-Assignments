//C Program to Find the Sum of first 10 Natural Numbers Using For loop

#include<stdio.h>
int main()
{
 
  int i, sum = 0;

  for(i=1;i<=10;i++)
  {
       sum = sum + i;
  }
  printf("Sum of first 10 Natural Numbers is : %d\n", sum);
  return 0;
}