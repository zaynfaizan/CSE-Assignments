#include<stdio.h>

int main()
{
    int n,x;
    long double i=2;
     // Program to display series 2,4,16,256...
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("\n");
    x=1;
    while(x<=n)
    {
        printf("%Lf\n",i);  
        x++;
        i*=i;
    }
    return 0;
}