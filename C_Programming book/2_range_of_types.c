#include <stdio.h>

int main()
{
    unsigned char charsize;
    unsigned int intsize;
    long longsize = 345UL;
    double num = 123.8F;

    int octal_num = 0123; // the leading zero represents an octal number.
    int hex_num = 0x1a; 

    printf("Size of char is: %ld\n", sizeof(char));
    printf("Size of int is: %ld\n", sizeof(int));
    printf("Size of double is: %ld\n", sizeof(double));
    printf("Size of long is: %ld\n\n", sizeof(long));

    printf("Size of long int is: %ld\n", sizeof(long int));
    printf("Size of long double is: %ld\n", sizeof(long double));
    printf("Size of long long is: %ld\n\n", sizeof(long long));

    printf("Size of unsigned char is: %ld\n", sizeof(charsize));
    printf("Size of unsigned int is: %ld\n", sizeof(intsize));
    printf("Size of unsigned long is: %ld\n\n", sizeof(longsize));

    printf("This is an octal number: %o, in decimal: %d\n", octal_num, octal_num);
    printf("This is a hex number: 0x%x, in decimal: %d\n", hex_num, hex_num);
}