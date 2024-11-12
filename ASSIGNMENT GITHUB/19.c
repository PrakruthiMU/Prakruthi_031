#include <stdio.h>

int main() {
    char num[1001];
    int freq[10] = {0};


    scanf("%s", num);


    for (int i = 0; num[i]; i++) {
        if (num[i] >= '0' && num[i] <= '9') {
            freq[num[i] - '0']++;
        }
    }


    for (int i = 0; i <= 9; i++) {
        printf("Frequency of %d: %d\n", i, freq[i]);
    }

    return 0;
}
