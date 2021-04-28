#include <stdio.h>

#define SET_ON 11

long bin_conv(int dec_num)
{
    int rem = 0, multiplier = 1;
    long bin_num = 0;
    while (dec_num != 0)
    {
        rem = dec_num % 2;
        dec_num = dec_num / 2;
        bin_num += rem * multiplier;
        multiplier *= 10;
    }
    return bin_num;
}

int main()
{
    int n = 5, x = 2;
    n = n & 011; // sets to zero all but the low-order bits 7 bits of n??
    printf("n is: %ld\n", bin_conv(n));

    printf("x is: %d\n", x);
    x = x | SET_ON;
    printf("x is: %d\n", x);
}