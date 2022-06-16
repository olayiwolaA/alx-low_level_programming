#include "main.h"
#include <string.h>

/**
 * cap_string - capitalizes all words of a string
 * @a: pointer to char.
 * Return: Always 0.
 *
 */
char *cap_string(char *a)
{
char capital[] = " \t\n,;.!?\"(){}";
int i, j;

for (i = 0; a[i] != '\0'; i++)
{

if (a[i] >= 'a' && a[i] <= 'z')
{

if (i == 0)
a[i] -= 32;


else
{
for (j = 0; capital[j] != '\0'; j++)
{
if (a[i - 1] == capital[j])
a[i] -= 32;
}
}

}
}
return (a);
}

