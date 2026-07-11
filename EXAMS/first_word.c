#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int     main(int argc, char *argv[])
{
    int     i;

    // Phase 1: The Guardrail
    if (argc == 2)
    {
        i = 0;

        // Phase 2: Skipping Leading Whitespace (Fixed the infinite loop)
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
        {
            i++;
        }

        // Phase 3: Printing the Word (Fixed the  vs && trap)
        while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
        {
            ft_putchar(argv[1][i]);
            i++;
        }
    }
    // Phase 4: The Mandatory Newline
    // By putting this at the very end, it handles both the success
    // path AND the "wrong number of arguments" path automatically!
    ft_putchar('\n');

    return (0);
}