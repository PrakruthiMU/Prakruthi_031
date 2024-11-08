#include <stdio.h>
int searchElement(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return 1; // Element found
        }
    }
    return 0; // Element not found
}

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Enter the element to search: ");
    scanf("%d", &x);

    if (searchElement(arr, n, x)) {
        printf("%d found in the array.\n", x);
    } else {
        printf("%d not found in the array.\n", x);
    }

    return 0;
}


