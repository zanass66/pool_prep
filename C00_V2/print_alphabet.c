#include <unistd.h>
void ft_putchar(char c) {
    write(1, &c, 1);
}
void  print_alphabet(void) {
    char alphabet;
    alphabet = 'a';
    while (alphabet <='z') {
        ft_putchar(alphabet);
        alphabet++;
    }
}
int main(void) {
    print_alphabet();
    ft_putchar('\n');
    return 0;
}