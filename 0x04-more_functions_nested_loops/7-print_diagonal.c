#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: is a int variable
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int s, e;
if (n > 0)
{
for (s = 0; s < n; s++)
{
for (e = 0; e < s; e++)
_putchar(' ');

_putchar('\\');
_putchar('\n');
}
}

else
_putchar('\n');
}
