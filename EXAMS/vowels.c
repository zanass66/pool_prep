#include <stdio.h>
#include <unistd.h>
void    ft_putchar(char c) {
    write(1,&c,1);
}
int is_vowel(char c) {
    if (c == 'A' || c == 'E' || c == 'I'|| c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i'|| c == 'o' || c == 'u')
        return 1;
    return 0;
}
void    remove_vowels(char *str) {
    int i;
    i = 0;
    while (str[i] != '\0') {
        if (is_vowel(str[i]) == 0)
            ft_putchar(str[i]);
        i++;
    }
}
int main(void) {
    char a[] = "HELLO";
    remove_vowels(a);
    return 0;
}