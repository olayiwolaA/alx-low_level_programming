#include "main.h"
#include <stdio.h>
/**
 * factorial - get the factorial of a given number
 * @n: is the number which get the factorial
 * Return: n factorial
 */
int factorial(int n)
{
int fact = 0;
if (n < 0)
return (-1);
if (n == 0)
return (1);
else
{
fact = n * factorial(n - 1);
return (fact);
}
}

