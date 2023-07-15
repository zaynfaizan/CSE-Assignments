#include <stdio.h>
// Program to display series 2,4,8,16..
int main() 
{
int n, i=2;

printf("Enter the length of Series: ");
scanf("%d", &n);

while(n!=0)
{
printf("%d \n", i);
i*=2;
n-=1;
}
return 0;
}