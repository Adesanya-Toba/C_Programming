#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 69;

    x == 3 ? x++ : x--;

    /* doesn't work */
    // x = isTrue() ? 4 : 7;

    printf("%d\n", x);
}