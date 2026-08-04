#include <stdio.h>
#include <stdlib.h>
int is_palindrome(char *str) {
//calculate the Lenght
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
// Allocate Memory
    char *new_string = (char*) malloc (sizeof(char) * len + 1);
//copying stirng from last to first
    int i = len - 1;
    int j = 0;
    while (i >= 0){
            new_string[j] = str[i];
            j++;
            i--;
        }
        new_string[j] = '\0';
//compare the two string's
    int k = 0;
    while (k < len) {
        if (str[k] != new_string[k]) {
            free(new_string);
            return 0;
        }
        k++;
    }
    free(new_string);
    return 1;
}
int main() {
    char q[] ="malayzlam";
    int new_string = is_palindrome(q);
    printf("%d",new_string);
}