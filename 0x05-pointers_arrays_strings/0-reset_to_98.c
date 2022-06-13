#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int n;

n = 402;
printf("n=%d\n", n);
reset_to_98(&n);
printf("n=%d\n", n);
return (0);
}

#include "main.h"
/**
 * reset_to_98 - takes a pointer to an int, updates value it points to 98
 * @n: is a pointer int type
 * Return: Always 0.
 */

void reset_to_98(int *n)
{
*n = 98;
}
