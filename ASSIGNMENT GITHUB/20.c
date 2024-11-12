#include <stdio.h>
#include <string.h>

char* binaryToDNA(char *binary) {
    static char dna[10001];  
    dna[0] = '\0';  

    for (int i = 0; i < strlen(binary); i += 2) {
        char pair[3] = {binary[i], binary[i+1], '\0'};

        if (strcmp(pair, "00") == 0) strcat(dna, "A");
        else if (strcmp(pair, "01") == 0) strcat(dna, "T");
        else if (strcmp(pair, "10") == 0) strcat(dna, "C");
        else if (strcmp(pair, "11") == 0) strcat(dna, "G");
    }

    return dna;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        char binary[10001];
        scanf("%s", binary);

        int N = strlen(binary);
        if (N % 2 == 0 && N <= 10*3 && N >= 2) {
            printf("%s\n", binaryToDNA(binary));
        } else {
            printf("Error: Invalid input length.\n");
        }
    }

    return 0;
}
