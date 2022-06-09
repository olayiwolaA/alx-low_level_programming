#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9).
 *
 * @c: is a variable int
 *
 * Return: Always 0.
 */

int _isdigit(int c)
{
char i;
for (i = '0'; i <= '9'; i++)
{
if (c == i)
return (1);
}
return (0);
}
