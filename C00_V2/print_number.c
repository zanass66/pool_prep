#include <unistd.h>
void    ft_putchar(char c) {
    write(1,&c,1);
}
void    print_number(void) {
    char number = '0';
    while (number <= '9') {
        ft_putchar(number);
        number++;
    }
}
int main(void) {
    print_number();
    ft_putchar('\n');
    return 0;
}