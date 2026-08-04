#include <stdio.h>
char *Strupcase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return str;
}
int main() {
    char q[] =  "HELLO";
    printf("%s",Strupcase(q));
}