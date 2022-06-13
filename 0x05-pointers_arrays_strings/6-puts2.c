#include "main.h"
/**
 * puts2 - print every other character of a string.
 * @str: pointer int type
 * Return: Always 0.
 */
void puts2(char *str)
{
int i;
for (i = 0; *str != '\0'; i++)
{
if (i % 2 == 0)
_putchar(*str);
str++;
}
_putchar('\n');
}
