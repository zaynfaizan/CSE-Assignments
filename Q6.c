#include <stdio.h>
// Program to calculate tax
int main() {
    float income, taxableIncome, tax;

    printf("Enter the income: Rs ");
    scanf("%f", &income);

    // Calculate taxable income by subtracting the exemption limit of Rs 1,50,000
    taxableIncome = income - 150000;

    if (taxableIncome <= 0) {
        tax = 0; // No tax if income is less than Rs 1,50,000
    } else if (taxableIncome <= 150000) {
        tax = 0.10 * taxableIncome; // 10% tax on income in the range Rs 1,50,000-3,00,000
    } else if (taxableIncome <= 300000) {
        tax = 15000 + 0.20 * (taxableIncome - 150000); // Rs 15,000 plus 20% tax on income in the range Rs 3,00,000-5,00,000
    } else {
        tax = 45000 + 0.30 * (taxableIncome - 300000); // Rs 45,000 plus 30% tax on income above Rs 5,00,000
    }

    printf("The calculated tax is: Rs %.2f\n", tax);

    return 0;
}
