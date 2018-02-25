#include <stdio.h>

int strend(char *, char*);

int main(void)
{
    char s[10];
    printf("s= ");
    scanf("%s", s);
    char t[10];
    printf("t= ");
    scanf("%s", t);
    printf("%d\n", strend(s, t));
    return 0;
}

int strend(char *s, char *t)
{
    char *temp = t;
    while (*s) {
        while (*s == *t) {
            if (!(*s)) {
                return 1;
            }
            s++;
            t++;
        }
        s++;
        t = temp;
    }
    return 0;
}
