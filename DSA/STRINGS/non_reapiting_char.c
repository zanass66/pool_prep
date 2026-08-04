#include <stdbool.h>
#include <stdio.h>
/*you are given a  string consisting of only lower case and upper-case English Alphabets
 *and  integers 0 to 9 write a function  that will take this
 *string as input and return the index of the first character that's is non repeating*/
// heekewknf43
// 0  --->   false
// 1 ----> true
int find_non_repeating_char(char *str) {
    int i  = 0;
    while (str[i] != '\0') {
        int repeat = false;
        int j = 0;
        while (str[j]  != '\0') {
            if (str[i] ==  str[j] && i !=  j)
                repeat  =  true;
            j++;
        }
        if (repeat ==  false)
            return i;
        i++;
    }
}
int  main() {
    char q[] =  "Hello";
    printf("%d",find_non_repeating_char(q));
    return 0;
}