#include <stdio.h>
#include <stdlib.h>

// Function to update 'a' and 'b'
void update(int* a, int* b) {
    int tempA = *a;
    *a = tempA + *b;
    *b = abs(tempA - *b);
}

int main() {
    int a = 5;
    int b = 3;

    printf("Before update:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    update(&a, &b);

    printf("\nAfter update:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
