#include <stdio.h>
// Program to display right triangle using asterisk
void displayTriangle(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    displayTriangle(n);

    return 0;
}
