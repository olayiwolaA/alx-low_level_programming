#include <stdio.h>
#include <math.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{

unsigned long se, prime, n = 15;

for (se = 3; se <= n; se += 2)
{
while (n % se == 0)
{
prime = se;
n = n / se;
}
}
printf("%lu\n", prime);
return (0);
}
