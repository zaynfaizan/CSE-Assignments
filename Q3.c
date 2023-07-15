#include <stdio.h>
//Program to add digits of a 4 digit number
int main()
{
   int num, q, sum = 0, remainder;

   printf("Enter an integer\n");
   scanf("%d", &num);

   q = num;

   while (q != 0)
   {
      remainder = q % 10;
      sum       = sum + remainder;
      q         = q / 10;
   }

   printf("Sum of digits of %d = %d\n", num, sum);

   return 0;
}