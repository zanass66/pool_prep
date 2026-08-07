#include <stdio.h>
/*An array is monotonic if it is either monotone increasing or monotone decreasing.
 *An array is monotone increasing if all its elements from left to right are non-decreasing.
 *An arrayis monotone decreasing if all its elements from left to right are non-increasing.
 *Given an integer array return true if the given array is monotonic, or false otherwise*/
int monotonic_array(int *array, int size) {
    int i = 0;
    int is_increasing = 1;
    int is_decreasing = 1;
    while (i < size - 1) {
        if (array[i] > array[i + 1])
            is_increasing = 0;
        else if (array[i] < array[i + 1])
            is_decreasing = 0;
        i++;
    }
    if (is_increasing == 1 || is_decreasing == 1)
        return 1;
    return 0;
}
int main() {
    int a[] = {5,4,6};
    printf("%d",monotonic_array(a,3));
}