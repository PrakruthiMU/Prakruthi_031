#include <stdio.h>
#include <ctype.h>

void convertToTitleCase(char *str) {
    bool capitalizeNext = true;

    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            str[i] = toupper(str[i]);
            capitalizeNext = false;
        } else {
            str[i] = tolower(str[i]);
        }
    }
}

int main() {
    char str[1001];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    str[strcspn(str, "\n")] = 0;

    convertToTitleCase(str);

    printf("Title case: %s\n", str);

    return 0;
}

