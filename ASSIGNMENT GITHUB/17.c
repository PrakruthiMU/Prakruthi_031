#include <stdio.h>
#include <limits.h>

void maxSumTwoDistinct(int arr[], int n) {
    int max1 = INT_MIN;
    int max2 = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    if (max2 == INT_MIN) {
        printf("No two distinct elements found.\n");
    } else {
        printf("Maximum sum of two distinct integers: %d\n", max1 + max2);
    }
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int arr[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
        }

        maxSumTwoDistinct(arr, N);
    }

    return 0;
}
