#include "main.h"
#include <stdio.h>

/**
 *  * reverse_array - reverses the content of an array of integers.
 *  @a: an array of integers
 *  @n: the number of elements to swap
 *  * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int result[500];
int i;
n--;

for (i = 0; i <= n; i++)
result[i] = a[i];

for (i = 0; i <= n; i++)
a[i] = result[n - i];
}

