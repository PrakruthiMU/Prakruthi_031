#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Get array size from user
    printf("Enter array size (1-1000): ");
    scanf("%d", &n);

    // Validate input
    while (n < 1 || n > 1000) {
        printf("Invalid input. Enter a value between 1 and 1000: ");
        scanf("%d", &n);
    }

    // Dynamically allocate memory
    int* arr = (int*)malloc(n * sizeof(int));

    // Check memory allocation
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return -1;
    }

    // Read values from stdin
    printf("Enter %d elements (1-1000):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        // Validate input
        while (arr[i] < 1 || arr[i] > 1000) {
            printf("Invalid input. Enter a value between 1 and 1000 for element %d: ", i+1);
            scanf("%d", &arr[i]);
        }
    }

    // Calculate sum
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Print sum
    printf("Sum of all elements: %d\n", sum);

    // Free memory
    free(arr);

    return 0;
}

