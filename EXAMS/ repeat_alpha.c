#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}
int     main(int argc, char *argv[])
{
    int     i;
    int     count;

    // Phase 1: The Guardrail
    if (argc == 2)
    {
        i = 0;
        while (argv[1][i] != '\0')
        {
            // Phase 2: The Math (Fixed the || to &&)
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                count = (argv[1][i] - 'a') + 1;
            }
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                count = (argv[1][i] - 'A') + 1;
            }
            else
            {
                count = 1; // Punctuation, spaces, and numbers just print once
            }

            // Phase 3: The Repeater (The nested loop you were missing)
            while (count > 0)
            {
                ft_putchar(argv[1][i]);
                count--;
            }
            i++; // Move to the next character in the string
        }
    }

    // Phase 4: The Mandatory Newline (Moved completely outside the if block)
    ft_putchar('\n');

    return (0);
}