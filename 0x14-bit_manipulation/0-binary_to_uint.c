#include "main.h"
/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int i, j, num = 0, assign = 1;

if (b != NULL)
{
for (i = 0; b[i] != '\0'; i++)
if (b[i] != 0 + '0' && b[i] != 1 + '0')
return (0);
for (j = 0; j < i; j++)
{
num += (b[(i - 1) - j] - '0') * assign;
assign *= 2;
}
return (num);
}
return (0);
}

