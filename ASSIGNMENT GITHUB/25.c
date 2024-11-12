#include <stdio.h>

struct MixedTypes {
    char c;
    int i;
    double d;
    char ch;
    int j;
};

int main() {
    struct MixedTypes mt;

    printf("Memory addresses:\n");
    printf("mt.c    : %p\n", (void*)&mt.c);
    printf("mt.i    : %p\n", (void*)&mt.i);
    printf("mt.d    : %p\n", (void*)&mt.d);
    printf("(link unavailable)   : %p\n", (void*)&(link unavailable));
    printf("mt.j    : %p\n", (void*)&mt.j);

    printf("\nSizes:\n");
    printf("sizeof(char)     : %zu\n", sizeof(char));
    printf("sizeof(int)      : %zu\n", sizeof(int));
    printf("sizeof(double)   : %zu\n", sizeof(double));
    printf("sizeof(struct MixedTypes) : %zu\n", sizeof(struct MixedTypes));

    return 0;
}
