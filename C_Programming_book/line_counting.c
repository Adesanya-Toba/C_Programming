#include <stdio.h>

/* Count lines in input */
int c, nl, tl, bl; // c, newlines, tab lines, blank lines

int main()
{
    nl, tl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
        else if (c == '\t')
            ++tl;
        else if (c == ' ')
            ++bl;
    printf("no of lines: %d\n", nl);
    printf("no of tabs: %d\n", tl);
    printf("no of blanks: %d\n", bl);
}

void replaceBlanks()
{
    while((c = getchar()) != EOF)
        if (c == ' ')
            ++bl;
            if (bl > 1)
        putchar(c);
}