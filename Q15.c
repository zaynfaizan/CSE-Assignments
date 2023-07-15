#include <stdio.h>
// Program to display series 1,2,2,3,3,3..n
void displaySeries(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", i);
        }
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    displaySeries(n);
    return 0;
}
