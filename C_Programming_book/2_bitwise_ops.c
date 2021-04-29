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

// returns the (right adjusted) n-bit field of x that begins at position p
/*  get_bits(x, p, n) returns n bits from x, starting from position
*   p, right shifted by 1.
*   
*   So if x = 10 1011, the expected answer with p = 4 & n = 3, would be
*   0010 (just added one zero before the 4th bit)
*/
unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p + 1-n)) & ~(~0 << n);
}

int main()
{
    int n = 5, x = 2;
    n = n & 0177; // sets to zero all but the low-order bits 7 bits of n??
    // Because, recall 0177 is an octal num which in bin is: 0111 1111
    // AND-ing this with n = 0000 0000, would set the last 7 bits to zero
    // leaving the MSB as is. This really depends on the value of n though. 
    printf("n is: %ld\n", bin_conv(n));

    printf("x is: %d\n", x);
    x = x | SET_ON;
    printf("x is: %d\n", x);


    unsigned num = getbits(101101u, 4, 3);
    printf("num is: %ld\n", bin_conv(num));
}