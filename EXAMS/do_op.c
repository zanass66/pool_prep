#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
//./do_op "123" "" "456" ---> 56088
void    ft_putchar(char c)
{
    write(1,&c,1);
}
int     main(int argc, char *argv[])
{
    if(argc == 4)
    {
        int num1 = atoi(argv[1]);
        int num2 = atoi(argv[3]);
        int result = 0;
        if(argv[2][0] == '+')
            result = num1 + num2;
        else if(argv[2][0] == '-')
            result = num1 - num2;
        else if(argv[2][0] == '')
            result = num1 num2;
        else if(argv[2][0] == '/')
            result = num1 / num2;
        else
            result = num1 % num2;
        printf("%d\n",result);
    }
    else
        ft_putchar('\n');
    return 0;
}