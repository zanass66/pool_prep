#include <stdio.h>
#include <stdlib.h>

int is_palindrome(char *str) {
    int len = 0;
    while (str[len] != '\0')
        len++;
    char *new_str = (char *) malloc (sizeof(char) * len + 1);
    int i = len - 1;
    int j = 0;
    while (i >= 0) {
        new_str[j] = str[i];
        j++;
        i--;
    }
    int k = 0;
    while (k < len) {
        if (new_str[k] != str[k]) {
            free(new_str);
            return 0;
        }
        k++;
    }
    free(new_str);
    return 1;
}
int main() {
    char q[] = "malayzlam";
    printf("%d",is_palindrome(q));
}