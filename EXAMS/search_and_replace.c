#include <unistd.h>
void    ft_putchar(char c)
{
    write(1,&c,1);
}
// ./a.out "hello world" "o" "a"
int     main(int argc, char *argv[])
{
    if(argc == 4)
    {
        int     i;
        i  = 0;
        if(argv[2][1] == '\0' && argv[3][1] == '\0')
        {
            while(argv[1][i] != '\0' )
            {
                if(argv[1][i] == argv[2][0])
                    ft_putchar(argv[3][0]);
                else
                    ft_putchar(argv[1][i]);
                i++;
            }
        }
    }
    ft_putchar('\n');
    return 0;
}