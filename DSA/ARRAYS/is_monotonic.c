#include <stdbool.h>
#include <stdio.h>
bool is_monotonic(int *array, int size) {
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
        return true;
    return false;
}
int main() {
    int q[] = {5,3,4};
    printf("%i",is_monotonic(q,3));

}
