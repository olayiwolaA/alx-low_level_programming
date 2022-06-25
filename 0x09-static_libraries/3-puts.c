#include "main.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char a[15];
    char b[15];
    char c;

    strcpy(a, "includehelp");
    strcpy(b, "ihelp");

    puts(a);
    puts(b);

    for (c = 'Z'; c >= 'A'; c--) {
        putchar(c);
    }

    return (0);
}

