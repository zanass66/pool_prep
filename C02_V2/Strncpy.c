#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int nb) {
    unsigned int i;
    i = 0;
    while (src[i] != '\0' && i < nb) {
        dest[i] = src[i];
        i++;
    }
    while (i < nb) {
        dest[i] = '\0';
        i++;
    }
    return dest;
}
int main(void) {
    char a[] = "Hello";
    char b[10] = "asdca";
    ft_strncpy(b,a,8);
    printf("%s",b);
    return 0;
}