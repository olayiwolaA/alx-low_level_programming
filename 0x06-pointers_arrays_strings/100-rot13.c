#include "main.h"
#include <string.h>

/**
 * rot13 - encodes a string using rot13
 * @a: is a pointer type char
 * Return: Always 0.
 */
char *rot13(char *a)
{
char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char cipher[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i, j;

for (i = 0; a[i] != '\0'; i++)
{
for (j = 0; alpha[j] != '\0'; j++)
{
if (a[i] == alpha[j])
{
a[i] = cipher[j];
break;
}
}
}
return (a);
}

