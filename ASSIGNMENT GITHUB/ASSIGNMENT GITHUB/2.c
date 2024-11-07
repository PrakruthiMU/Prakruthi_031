#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);  // Bring character 'ch' in first line
    printf("%c\n", 's');  // Print 's' in next line
    printf("sen\n");      // Print sentence 'sen' in last line
    return 0;
}
