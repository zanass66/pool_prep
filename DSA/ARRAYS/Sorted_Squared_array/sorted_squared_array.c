//Brute Force Method
//1/allocate memory using malloc
//2/square each element
//3/sort the new array
#include <stdlib.h>
#include <stdio.h>
int *sorted_sqaured(int *array, int size) {
    int *new_array;
    int i;
    int j;
    int temp;
    new_array = (int *) malloc(sizeof(int) * size);
    if (new_array == NULL)
        return NULL;
    i = 0;
    while (i < size) {
        new_array[i] = array[i] * array[i];
        i++;
    }
    i = 0;
    while (i < size - 1) {
        j = 0;
        while (j < size - 1) {
            if (new_array[j] > new_array[j + 1]) {
                temp = new_array[j];
                new_array[j] = new_array[j + 1];
                new_array[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
    return(new_array);
}
int main(void) {
    int a[] = {10,9,3,7,5};
    int *my_array;
    int i;
    my_array = sorted_sqaured(a,5);
    if (my_array == NULL)
        return 1;
    i = 0;
    while (i < 5) {
        printf("%d\t",my_array[i]);
        i++;
    }
    printf("\n");
    free(my_array);
    return 0;
}