#include "main.h"
/**
 * rev_string -  reverses a string.
 * @s: pointer int type
 * Return: Always 0.
 */
void rev_string(char *s)
{
int a, b;
char rev[500];

for (a = 0; *s != '\0'; a++)
{
rev[a] = *s;
s++;
}

s--;

for (b = 0; b != a; b++)
{
*s = rev[b];
s--;
}

s++;

}
