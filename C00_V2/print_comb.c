#include <unistd.h>
void    ft_putchar(char c) {
    write(1,&c,1);
}
void    print_comb(void) {
    char i;
    char j;
    char k;
    i = 0;
    while (i <= 7) {
        j = i + 1;
        while (j <= 8) {
            k = j + 1;
            while (k <= 9) {
                ft_putchar(i + '0');
                ft_putchar(j + '0');
                ft_putchar(k + '0');
                if (!(i == 7 && j ==  8 && k == 9))
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                k++;
            }
            j++;
        }
        i++;
    }
}
int main(void) {
    print_comb();
    return 0;
}