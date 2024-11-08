#include <stdio.h>

int count_element(int *arr, int n, int target) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == target) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    printf("Enter the number of elements (1-100): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the target element: ");
    scanf("%d", &target);

    int count = count_element(arr, n, target);
    printf("Target element %d appears %d times.\n", target, count);

    return 0;
}
