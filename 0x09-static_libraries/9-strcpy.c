#include "main.h"
#include <string.h>
/**
 * _strcpy -  copies the string pointed to by src.
 * @dest: pointer char type
 * @src: pointer char type
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; *src != '\0'; i++)
{
dest[i] = *src;
src++;
}

dest[i++] = *src;

return (dest);
}
