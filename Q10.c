#include<stdio.h>
// Program to find sum of series 1,2,3,4..N
int main()
{
    int N, prod = 1;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    for(int i =2; i<=N; i++)
    {

        prod *= i;
        
    }

    printf("%d", prod);

    return 0;
}
