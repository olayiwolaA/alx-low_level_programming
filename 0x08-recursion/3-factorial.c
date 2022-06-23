#include "main.h"
#include <stdio.h>
/**
 * factorial - get the factorial of a given number
 * @n: is the number which get the factorial
 * Return: n factorial
 */
int factorial(int n)
{
if (n != 0)
return (n * factorial(n - 1));
else
return (1);
}

