#include <stdio.h>
//Program to display 12345,12345...(n times)
void displaySeries(int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 1; j <= 5; j++) {
            printf("%d", j);
        }
    }
}

int main() {
    int n;

    printf("Enter the number of times to repeat the series: ");
    scanf("%d", &n);

    displaySeries(n);

    return 0;
}