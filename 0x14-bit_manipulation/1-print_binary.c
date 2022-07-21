#include "main.h"
/**
 * print_binary - prints the binary representation
 * of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
unsigned long int numbin = 1;

if (n == 0)
{
_putchar('0');
return;
}
numbin = numbin << 63;
for (; !(n & numbin); )
numbin = numbin >> 1;

for (; numbin; )
{
_putchar(n & numbin ? '1' : '0');
numbin = numbin >> 1;
}
}

