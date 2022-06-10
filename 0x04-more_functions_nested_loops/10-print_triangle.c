#include "main.h"
/**
 * print_triangle - function prints a triangle, followed by a new line.
 * @size: int variable
 * Return: Always 0.
 */
void print_triangle(int size)
{
int i, j;
if (size > 0)
{
for (i = 0; i < size; i++)
{

for (j = i; j < size - 1; j++)
_putchar(' ');

for (j = 0; j < size - ((size - 1) - i); j++)
_putchar(35);

_putchar('\n');
}
}

else
_putchar('\n');
}
