#include <stdio.h>
unsigned char reverse_bits(unsigned char octet)
{
    unsigned char   result;
    unsigned char   bit;
    int     i;
    result = 0;
    i = 8;
    while(i > 0)
    {
        result = result << 1;
        bit = octet & 1;
        result = result | bit;
        octet = octet >> 1;
        i--;
    }
    return result;
}
int     main(void)
{
    unsigned char original = 'A';
    unsigned char reversed;
    reversed = reverse_bits(original);
    printf("original: %d\n",original);
    printf("reversed: %d\n",reversed);
    //Note: 01000001 reversed is 10000010, which is 130 in decimal!
    return 0;
}