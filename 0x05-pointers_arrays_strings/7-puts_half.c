#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
int i;
for (i = 0; *str != '\0'; i++)
str++;

i = i / 2;

for (i = i; i != 0; i--)
_putchar(*(str - i));

_putchar('\n');
}
