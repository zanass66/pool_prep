#include <stdio.h>
//Given a string s ,find the length of the longest substring without repeating characters.
// compare the elements of string and if it not unique return 0 otherwise return 1
int check_unique(char *str, int start, int end) {
    int i = start;
    while (i <= end) {
        int j = i + 1;
        while (j <= end) {
            if (str[i] == str[j])
                return 0;
            j++;
        }
        i++;
    }
    return 1;
}
//identify the max len
int longest_substring(char *str) {
    int max_len = 0;
    int i = 0;
    int current_len;
    if (str[0] == '\0')
        return 0;
    while (str[i] != '\0') {
        int j = i;
        while (str[j] != '\0') {
            if (check_unique(str,i,j) == 1) {
                current_len = j - i + 1;
                if (current_len > max_len)
                    max_len = current_len;
            }
            else
                break;
            j++;
        }
        i++;
    }
    return max_len;
}
int main() {
    char q[] = "abccd";
    //printf("%d\n",check_unique(q,0,9));
    printf("%d",longest_substring(q));
}