//section 1 :Days review
//section 2 :exams 1 or two
//section 3 :DSA
#include <stdio.h>
#include <stdlib.h>

int *sorted_squared(int *array, int size) {
    int *new_array;
    int i;
    int j;
    int temp;
    new_array = (int *) malloc(sizeof(int) * size);
    if (new_array == NULL)
        return (NULL);
    i = 0;
    while (i < size) {
        new_array[i] = array[i] * array[i];
        i++;
    }
    i = 0;
    while (i < size - 1) {
        j = 0;
        while (j < size -1) {
            if (new_array[j] > new_array[j + 1]) {
                temp = new_array[j];
                new_array[j] = new_array[j + 1];
                new_array[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
    return (new_array);
}
int main(void) {
    int a[] = {4,3,5,6,1};
    int *my_array;
    int i;
    my_array = sorted_squared(a,5);
    if (my_array == NULL)
        return (1);
        i = 0;
        while (i < 5) {
            printf("%d\t",my_array[i]);
            i++;
        }
        free(my_array);
        return 0;
}