#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string, in reverse.
 * @s: pointer int type
 * Return: Always 0.
 */
void print_rev(char *se)
{
int rev;
for (rev = 0; *se != '\0'; rev++)
se++;

se--;
for (rev = rev; rev != 0; rev--)
{
_putchar(*se);
se--;
}

_putchar('\n');
}
