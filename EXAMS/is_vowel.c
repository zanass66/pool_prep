//vowels a,e,u,o,
#include <stdio.h>
#include <unistd.h>
void    ft_putchar(char c) {
    write(1,&c,1);
}
int is_vowel(char c) {
    if (c == 'a'|| c == 'e'|| c == 'u' || c == 'o' || c == 'A' || c == 'E' || c == 'U' || c == 'O')
        return 1;
    return 0;
}
void    print_vowel(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (is_vowel(str[i]) == 0)
            ft_putchar(str[i]);
        i++;
    }
}
int main() {
    char q[] = "Hello";
    print_vowel(q);
}