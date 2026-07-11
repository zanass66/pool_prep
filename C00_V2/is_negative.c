#include <unistd.h>
void    ft_putchar(char c) {
    write(1,&c,1);
}
void    is_negative(int nb) {
    if (nb >= 0)
        ft_putchar('P');
    else
        ft_putchar('N');
}
int main(void) {
    is_negative(0);
    ft_putchar('\n');
    is_negative(4);
    ft_putchar('\n');
    is_negative(-10);
    return 0;
}