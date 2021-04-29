#include <stdio.h>

/* Invert n bits of x from position p */
unsigned my_invert(unsigned x, int p, int n)
{
    return (x >> (p+1-n)) | (1111);
}

// Trusty binary converter function
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
    unsigned inv_num = 0;
    inv_num = my_invert(110011u, 4, 3);
    printf("Inverted bits are: %d, %ld\n", bin_conv(inv_num), inv_num);
}