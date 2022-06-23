#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Print a string
 * @s: puts with recursion
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
_putchar('\n');

else
{
_putchar(*s);
_puts_recursion(s + 1);
}

}

