#include <stdio.h>
int str_is_alpha(char *str) {
    int i;
    i = 0;
    while (str[i] != '\0') {
        if (!(str[i] >= 'a' && str[i] <='z' || str[i] >= 'A' && str[i] <= 'Z'))
            return 0;
        i++;
    }
    return 1;
}
int main(void) {
    char a[] = "1gdfg";
    printf("%d",str_is_alpha(a));
}