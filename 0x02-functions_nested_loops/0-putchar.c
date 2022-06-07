#include "main.h"
/**
 * main - Entry point
 *
 *Descripton: prints _purchar
 *
 * Return: Always 0.
 */
int main(void)
{
char alx[8] = "_putchar";
int i = 0;
for (i = 0; i < 8; i++)
{
_putchar(alx[i]);
}
_putchar('\n');
return (0);
}
