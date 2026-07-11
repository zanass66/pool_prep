#include <stdio.h>
#include <stddef.h>
#include <string.h>
size_t ft_strcspn(const char s, const charreject)
{
    size_t i;
    size_t j;
    i = 0;
    while(s[i] != '\0')
    {
        j = 0;
        while(reject[j] != '\0')
        {
            if(s[i] == reject[j])
                return i;
            j++;
        }
        i++;
    }
    return i;
}
int  main(void)
{
#include <string.h>
    const char path1 = "hello world";
    const charmines1 = "p";
    printf("Real strcspn: %zu\n", strcspn(path1,mines1));
    printf("mine :%zu\n",strcspn(path1,mines1));
    return 0;
}