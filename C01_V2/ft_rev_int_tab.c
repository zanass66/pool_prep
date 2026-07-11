#include <stdio.h>
void    rev_int_array(int *array, int size) {
    int start = 0;
    int end = size - 1;
    while (start <= end) {
        int temp;
        temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }
}
int main(void) {
    int array[5] = {4,5,6,1,10};
    rev_int_array(array,5);
    int i;
    i = 0;
    while (i < 5) {
        printf("%d\t",array[i]);
        i++;
    }
    return 0;
}