#include <stdio.h>
#include <stdlib.h>
/*Group Anagrams - Given an array of strings consisting of lower case English
 *letters, group the anagrams together. You can return the answer in any order.
 *An Anagram is a word or phrase formed by rearranging the letters of a different
 *word or phrase, using all the original letters exactly once.
 */
char *generate_signature(char *str) {
    int len = 0;
    while (str[len] != '\0')
        len++;

    char *new_string = (char *) malloc(sizeof(char) * len + 1);
    if (new_string == NULL)
        return NULL;

    int i = 0;
    int j = 0;
    while (str[i] != '\0') {
        new_string[j] = str[i];
        i++;
        j++;
    }
    new_string[j] = '\0';

    int k = 0;
    int size = len;
    while (k < size) {
        j = 0;
        while (j < size - 1) {
            if (new_string[j] > new_string[j + 1] ) {
                int temp;
                temp = new_string[j];
                new_string[j] = new_string[j + 1];
                new_string[j + 1] = temp;
            }
            j++;
        }
        k++;
    }
    return new_string;
}
int main() {
    char q[] = "hello";
    char *new_string = generate_signature(q);
    int i = 0;
    while (i < 5) {
        printf("%c\t",new_string[i]);
        i++;
    }
    free(new_string);
}