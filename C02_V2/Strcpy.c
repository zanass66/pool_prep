#include <stdio.h>
char    *f_strcpy(char *dest, char *src) {
    int i;
    i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
int main(void) {
    char a[] = "hello";
    char b[5];
    f_strcpy(b,a);
    printf("%s",b);
    return 0;
}
