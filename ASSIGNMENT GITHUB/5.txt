#include <stdio.h>

int main() {
    int age;
    float monthly_income;

    printf("Enter age (18-60): ");
    scanf("%d", &age);

    printf("Enter monthly income (0-50000): ");
    scanf("%f", &monthly_income);

    if (age < 18 || age > 60 || monthly_income < 0 || monthly_income > 50000) {
        printf("Invalid input. Please check age and income range.");
    } else if (age >= 18 && age <= 25 && monthly_income >= 5000) {
        printf("Loan eligible.");
    } else if (age >= 26 && age <= 40 && monthly_income >= 10000) {
        printf("Loan eligible.");
    } else if (age > 40 && monthly_income >= 15000) {
        printf("Loan eligible.");
    } else {
        printf("Loan not eligible.");
    }

    return 0;
}