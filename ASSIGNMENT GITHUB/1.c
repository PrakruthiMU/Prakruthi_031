#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);

    if (c >= 'a' && c <= 'z') {
        c -= 32; // Convert to upper case
    } else if (c >= 'A' && c <= 'Z') {
        c += 32; // Convert to lower case
    } else {
        printf("Invalid input");
        return 0;
    }

    printf("Converted character: %c", c);
    return 0;
}

