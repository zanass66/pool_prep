#include <stdio.h>
int sum_of_int(int nb) {
    int sum = 0;
    while (nb > 0) {
        int temp = nb % 10;
        sum = sum + temp;
        nb = nb / 10;
    }
    return sum;
}
int main() {
    int q = 1233;
    printf("%d",sum_of_int(q));
}
//123 % 10 = 3
// 0 + 3 = 3
// 12 / 10 = 1