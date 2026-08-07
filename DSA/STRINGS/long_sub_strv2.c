#include <stdio.h>
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
int longest_substring(char *str) {
    int i = 0;
    int max_len = 0;
    int current_len;
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
    char q[] = "anass";
    printf("%d",longest_substring(q));
}