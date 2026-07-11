#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int main(int argc, char *argv[])
{
    int i;
    int j;
    if (argc < 2)
    {
        ft_putchar('\n');
        return 0;
    }
    i = 1;
    while (i < argc)
    {
        j = 0;
        while (argv[i][j] != '\0')
        {
            //if it the start of word j == 0.
            //the character immediately before it was a space or tab.
            if (j == 0 || argv[i][j - 1] == ' ' ||  argv[i][j - 1] == '\t') {
                if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
                    argv[i][j] = argv[i][j] - 32;
            }
            else{
                if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
                    argv[i][j] = argv[i][j] + 32;
            }
            ft_putchar(argv[i][j]);
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}