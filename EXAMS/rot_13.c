/*Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.
'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.
The output will be followed by a newline.
If the number of arguments is not 1, the program displays a newline.*/
// rot_13
#include <unistd.h>
void    ft_putchar(char c) {
    write(1,&c,1);
}
int main (int argc, char * argv[]) {
    if (argc == 2) {
        int i;
        i = 0;
        while (argv[1][i] != '\0') {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'm' || argv[1][i] >= 'A' && argv[1][i] <= 'M' )
                argv[1][i] = argv[1][i] + 13;
            else if (argv[1][i] >= 'n' && argv[1][i] <= 'z' || argv[1][i] >= 'N' && argv[1][i] <= 'Z')
                argv[1][i] = argv[1][i] - 13;
            ft_putchar(argv[1][i]);
            i++;
        }
    }
    ft_putchar('\n');
    return 0;
}