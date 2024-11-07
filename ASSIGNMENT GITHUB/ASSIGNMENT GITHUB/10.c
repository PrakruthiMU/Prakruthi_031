include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("No\n");
        return 0;
    }

    int i = 2;
    int is_prime = 1;
    while (i * i <= num) {
        if (num % i == 0) {
            is_prime = 0;
            break;
        }
        i++;
    }

    if (is_prime) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

