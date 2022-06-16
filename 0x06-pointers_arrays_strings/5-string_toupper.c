#include "main.h"
#include <string.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: input string.
 * Return: the pointer to dest.
 *  Return: Always 0.
 */
char *string_toupper(char *s)
{
int upper = 0;

while (*(s + upper) != '\0')
{
if ((*(s + upper) >= 97) && (*(s + upper) <= 122))
*(s + upper) = *(s + upper) - 32;
upper++;

}

return (s);
}

