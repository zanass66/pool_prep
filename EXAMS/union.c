#include <unistd.h>
void    ft_putchar(char c)
{
    write(1,&c,1);
}
int     main(int argc, char *argv[])
{
    if(argc == 3)
    {
        int seen[256] ={0};
        int i = 0;
        while(argv[1][i] != '\0')
        {
            if (seen[(unsigned char)argv[1][i]] == 0)
            {
                ft_putchar(argv[1][i]);
                seen[(unsigned char) argv[1][i]] = 1;
            }
            i++;
        }
        i = 0;
        while(argv[2][i] != '\0')
        {
            if (seen[(unsigned char)argv[2][i]] == 0)
            {
                ft_putchar(argv[2][i]);
                seen[(unsigned char) argv[2][i]] = 1;
            }
            i++;
        }
    }
    ft_putchar('\n');
    return 0;
}