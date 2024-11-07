#include <stdio.h>

int main() {
    int score;

    printf("Enter score (0-100): ");
    scanf("%d", &score);

    if (score < 0 || score > 100) {
        printf("Invalid score. Please enter between 0 and 100.");
    } else if (score >= 90) {
        printf("Grade: A");
    } else if (score >= 80) {
        printf("Grade: B");
    } else if (score >= 70) {
        printf("Grade: C");
    } else if (score >= 60) {
        printf("Grade: D");
    } else {
        printf("Grade: F");
    }

    return 0;
}
