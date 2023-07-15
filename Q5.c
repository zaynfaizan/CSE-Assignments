#include <stdio.h>
// Program to display cube of the natural numbers upto n
int main()
 {
    int i,n;
    printf("Enter n upto where cube is to be found : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
	 printf("Number is : %d and cube of the %d is :%d \n",i,i, (i*i*i));     
    }
    return 0;
 }