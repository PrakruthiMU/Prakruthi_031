#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    gets(s);
    char *word = s;
    while (*word)
    {
        while (*word == ' ') word++;
        if (*word)
        {
            while (*word != ' ' && *word != '\0') printf("%c", *word++);
            printf("\n");
        }
    }

    return 0;
}
