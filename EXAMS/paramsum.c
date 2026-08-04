/*Write a program that displays the number of arguments passed to it, followed by
a newline.
If there are no arguments, just display a 0 followed by a newline.
*/
#include <unistd.h>
void ft_putchar(char c) {
    write(1,&c,1);
}
void    ft_putnbr(int nb) {
    if (nb >= 10)
        ft_putnbr(nb / 10);
    ft_putchar((nb % 10) + '0');
}
int main(int argc, char *argv[]) {
    if (argc == 1) {
        ft_putchar('0');
        ft_putchar('\n');
    }
    else {
        ft_putnbr(argc - 1);
        ft_putchar('\n');
    }
    return 0;
}