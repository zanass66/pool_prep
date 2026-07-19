#include <stdio.h>
void    sort_array(int *array, int size) {
    // [10,3,4,5,32,53]
    int i,j;
    i = 0;
    while (i < size - 1) {
        j = 0;
        while (j < size - 1) {
            if (array[j] > array[j + 1]) {
                int temp;

                temp = array[j];
                array[j] = array[j + 1];
                array[j+ 1] = temp;
            }
            j++;
        }
        i++;
    }
}
int main(void) {
    int array[5] = {1,10,4,5,6,};
    sort_array(array,5);
    int i = 0;
    while (i < 5) {
        printf("%d\t",array[i]);
        i++;
    }
    return 0;
}