#include "main.h"
#include <stdlib.h>
/**
 * _atoi - convert a string to an integer.
 * @s: pointer char type
 * Return: Always 0.
 */
int _atoi(char *s)
{
int before = 1, i = 0;
unsigned int after = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
before *= -1;

else if (s[i] >= 0 + '0' && s[i] < 10 + '0')
after = after * 10 + (s[i] - '0');

else if (s[i - 1] >= 0 + '0' && s[i - 1] < 10 + '0')
break;
}

return (after *before);
}
