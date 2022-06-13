#include "main.h"
#include <stdio.h>
/**
 * print_array -  prints n elements of an array of integers.
 * @a: pointer int type
 * @b: is a int variable
 * Return: Always 0.
 */
void print_array(int *a, int b)
{
int i, num;

for (i = 0; i < b; i++)
{

num = *(a + i);

printf("%d", num);

if (i != b - 1)
printf(", ");
}

printf("\n");
}
