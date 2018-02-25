#include <stdio.h>

void strcaat(char *s, const char *t);

int main(void)
{
    char s[10];
    printf("s= ");
    scanf("%s", s);
    char t[10];
    printf("t= ");
    scanf("%s", t);
    strcaat(s, t);
    printf("%s", s);
}

void strcaat(char *s, const char *t)
{
    while (*s)
        s++;
    while (*t)
        *s++ = *t++;
    *s = '\0';
}

