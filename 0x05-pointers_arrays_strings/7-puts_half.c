#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
int e, s, div;

e = 0;
while (str[e] != '\0')
{
e++;
}
div = e;
s = div / 2;
while (s <= div)
{
_putchar(str[s]);
s++;
}
_putchar('\n');
}
