#include <stdio.h>

int main() {
    int n;

    printf("Enter a 5-digit integer (10000-99999): ");
    scanf("%d", &n);

    if (n < 10000 || n > 99999) {
        printf("Invalid input. Please enter a 5-digit integer.");
        return 0;
    }

    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
