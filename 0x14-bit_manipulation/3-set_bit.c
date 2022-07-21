#include "main.h"
/**
 * set_bit - sets the value of a bit to 1.
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked,  else -1 .
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

if (!(*n & (1 << index)))
*n += 1 << index;
return (1);
}

