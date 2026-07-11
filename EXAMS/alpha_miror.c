#include <unistd.h>
void    ft_putchar(char c)
{
    write(1,&c,1);
}
int     main(int argc, char *argv[])
{
    if(argc == 2)
    {
        int     i;
        i = 0;
        while(argv[1][i] != '\0')
        {
            char current_char;
            char result;
            current_char = argv[1][i];
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                result = 'z' - (current_char - 'a');
                ft_putchar(result);
            }
            else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                result = 'Z' - (current_char - 'A');
                ft_putchar(result);
            }
            else
                ft_putchar(argv[1][i]);
            i++;
        }
    }
    ft_putchar('\n');
}